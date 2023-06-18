//Word Frequency Statistics
#include <stdio.h>
#include <string.h>

struct WORD{
	char Word[20];
	int Frequency;
};

int main(){
	void output(struct WORD *p,int n);  //callout
	void sort(struct WORD *p,int n);
	void output10(struct WORD *p,int n);
	char str[2000],s[100][20];
	struct WORD w[100];
	gets(str);
	int i = 0, j , num_w=0, str_w=0,cw=0;//num in struct

	for(i=0;i<strlen(str);i++){
		if(str[i]<='Z'&&str[i]>='A'){
			str[i]=str[i]-'A'+'a';
		}
	}


	//读入
	i=0;
	while(str[i]!=0){
		if(str[i]!=' '){
			s[num_w][str_w]=str[i];
			str_w++;
		}else{
			s[num_w][str_w]='\0';
			num_w++;str_w=0;
		}
		i++;
	}
	s[num_w][str_w]=0;

	for (j=0;j<=num_w;j++){
		//printf("%s\n",s[j]);
		for (i=0;i<cw;i++){
			if(strcmp(w[i].Word,s[j])==0){//same
				w[i].Frequency++;
				break;
			}
		}
		if(i==cw){
			w[cw].Frequency=1;
			strcpy(w[cw].Word,s[j]);
			//printf("%s\n", );
			cw++;
		}
	}
	sort(w,cw);
	output10(w,cw);
	return 0;

}
void output(struct WORD *p,int n){    //struct pointer
	int i;
	for (i=0;i<n;i++){
		printf ("%s:%d\n",p[i].Word,p[i].Frequency);
	}
}

void output10(struct WORD *p,int n){    //struct pointer
	int i,count=0;
	for (i=0;i<n;i++){
		printf ("%s:%d\n",p[i].Word,p[i].Frequency);
		count++;
		if(count>=10){
			break;
		}
	}
}

void sort(struct WORD *p,int n){    //xuanze
	int i,j;
	struct WORD tmpw;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (p[i].Frequency>p[j].Frequency){
				tmpw = p[i];p[i]=p[j];p[j]=tmpw;//前ASCII码比后面小0
			}else if (p[i].Frequency==p[j].Frequency&&strcmp(p[i].Word,p[j].Word)<0){
				tmpw = p[i];p[i]=p[j];p[j]=tmpw;

			}
		}
	}
}


