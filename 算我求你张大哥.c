#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char input[60] = { 0 };
	system("shutdown -s -t 20");
	while(1){
	printf("�����롮���������Ŵ�硯����Ȼ���Խ���1min�ڹػ�\n");
	scanf("%s", input);
		if (strcmp(input, "���������Ŵ��") == 0){
		system("shutdown -a");
		break;
		}
	}
	return 0;
}
