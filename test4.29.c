#include <stdio.h>

int main(){
	char s2[101],s1[101];
	int i=0;
	char c;


	// 读取字符串 s2

	//fgets(s2, sizeof(s2), stdin);
	/*
	while (i < 100 && (c = getchar()) != '\n') {// 逐个读取字符，直到遇到换行符或达到字符数组上限
		s2[i++] = c;
		}
		s2[i] = '\0';  // 在字符数组末尾加上结束符
		i=0;
	*/
	gets(s2);


	//scanf("%s",s2);



	while (s2[i] != '\0') {
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';

	printf("%s",s1);

	return 0;
}
