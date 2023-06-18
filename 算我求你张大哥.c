#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char input[60] = { 0 };
	system("shutdown -s -t 20");
	while(1){
	printf("请输入‘算我求你张大哥’，不然电脑将在1min内关机\n");
	scanf("%s", input);
		if (strcmp(input, "算我求你张大哥") == 0){
		system("shutdown -a");
		break;
		}
	}
	return 0;
}
