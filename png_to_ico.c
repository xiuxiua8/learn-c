#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    // Create the output file
    FILE* output_file = fopen(output_filename, "wb");
    if (output_file == NULL) {
        printf("Error: could not create output file %s\n", output_filename);
        free(basename);
        free(output_filename);
        return 1;
    }

    // Write the output file
    // ...

    fclose(output_file);
    free(basename);
    free(output_filename);

    return 0;
}

