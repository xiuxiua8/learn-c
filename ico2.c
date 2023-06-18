#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define PIXEL_BYTES 4 // Number of bytes per pixel in the .ico file

int main(int argc, char *argv[]) {
    char* input_filename;
    char* output_filename;

    if (argc < 2) {
        printf("Usage: %s <input filename>\n", argv[0]);
        return 1;
    }

    input_filename = argv[1];

    // Get the base filename without the extension
    char* basename = strdup(input_filename);
    char* last_dot = strrchr(basename, '.');
    if (last_dot != NULL) {
        *last_dot = '\0';
    }

    // Set the output filename
    output_filename = malloc(strlen(basename) + 5); // ".ico" plus null terminator
    strcpy(output_filename, basename);
    strcat(output_filename, ".ico");

    // Open the input file
    FILE* input_file = fopen(input_filename, "rb");
    if (input_file == NULL) {
        printf("Error: could not open input file %s\n", input_filename);
        free(basename);
        free(output_filename);
        return 1;
    }

    // Read the input file as a PNG image
    png_structp png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    if (png_ptr == NULL) {
        printf("Error: could not create PNG read struct\n");
        fclose(input_file);
        free(basename);
        free(output_filename);
        return 1;
    }

    png_infop info_ptr = png_create_info_struct(png_ptr);
    if (info_ptr == NULL) {
        printf("Error: could not create PNG info struct\n");
        png_destroy_read_struct(&png_ptr, NULL, NULL);
        fclose(input_file);
        free(basename);
        free(output_filename);
        return 1;
    }

    if (setjmp(png_jmpbuf(png_ptr))) {
        printf("Error: PNG error while reading %s\n", input_filename);
        png_destroy_read_struct(&png_ptr, &info_ptr, NULL);
        fclose(input_file);
        free(basename);
        free(output_filename);
        return 1;
    }

    png_init_io(png_ptr, input_file);
    png_read_info(png_ptr, info_ptr);

    png_uint_32 width, height;
    int bit_depth, color_type, interlace_type;
    png_get_IHDR(png_ptr, info_ptr, &width, &height, &bit_depth, &color_type, &interlace_type, NULL, NULL);

    // Allocate memory for the image data
    png_bytep* row_pointers = malloc(height * sizeof(png_bytep));
    for (png_uint_32 i = 0; i < height; i++) {
        row_pointers[i] = malloc(png_get_rowbytes(png_ptr, info_ptr));
    }

    // Read the image data
    png_read_image(png_ptr, row_pointers);

	   
	// Close the input file and destroy the PNG structs
	fclose(input_file);
	png_destroy_read_struct(&png_ptr, &info_ptr, NULL);
	
	// Open the output file
	FILE* output_file = fopen(output_filename, "wb");
	if (output_file == NULL) {
	    printf("Error: could not open output file %s\n", output_filename);
	    for (png_uint_32 i = 0; i < height; i++) {
	        free(row_pointers[i]);
	    }
	    free(row_pointers);
	    free(basename);
	    free(output_filename);
	    return 1;
	}
	
	// Create the icon data header
	unsigned char header[6];
	memset(header, 0, sizeof(header));
	header[0] = 0; // Reserved
	header[1] = 0; // Image type (0 = ICO, 1 = CUR)
	header[2] = 1; // Number of images in the file
	header[3] = 0; // Reserved
	header[4] = (unsigned char)width; // Image width
	header[5] = (unsigned char)height; // Image height
	
	// Write the icon data header to the output file
	fwrite(header, sizeof(header), 1, output_file);
	
	// Convert the image data to the icon format
	size_t num_pixels = width * height;
	size_t icon_data_size = num_pixels * PIXEL_BYTES;
	unsigned char* icon_data = malloc(icon_data_size);
	if (icon_data == NULL) {
	    printf("Error: could not allocate memory for icon data\n");
	    fclose(output_file);
	    for (png_uint_32 i = 0; i < height; i++) {
	        free(row_pointers[i]);
	    }
	    free(row_pointers);
	    free(basename);
	    free(output_filename);
	    return 1;
	}
	
	size_t icon_data_offset = 0;
	for (png_uint_32 y = 0; y < height; y++) {
	    png_bytep row = row_pointers[y];
	    for (png_uint_32 x = 0; x < width; x++) {
	        png_bytep pixel = &(row[x * 4]); // Assuming 32-bit RGBA
	        icon_data[icon_data_offset++] = pixel[2]; // Blue channel
	        icon_data[icon_data_offset++] = pixel[1]; // Green channel
	        icon_data[icon_data_offset++] = pixel[0]; // Red channel
	        icon_data[icon_data_offset++] = pixel[3]; // Alpha channel
	    }
	}
	
	// Convert the icon data to little-endian format
	for (size_t i = 0; i < icon_data_size; i += PIXEL_BYTES) {
	    unsigned char temp;
	    temp = icon_data[i];
	    icon_data[i] = icon_data[i + 2];
	    icon_data[i + 2] = temp;
	}
	
	// Write the icon data to the output file
	fwrite(icon_data, icon_data_size, 1, output_file);
	
	// Close the output file and free the memory
	fclose(output_file);
	for (png_uint_32 i = 0; i < height; i++) {
	    free(row_pointers[i]);
	}
	free(row_pointers);
	free(icon_data);
	free(basename);
	free(output_filename);
	
	printf("Icon file %s successfully created!\n", output_filename);
	
	return 0;

}
