//xuejiguanlixitong

#include <stdio.h>
#include <string.h>

struct Student{
	char name[30];
	int id;
	int class;
	float scores[3]; 
	float sumScore;
};

int main(){

	struct Student students[4] = {
        {1001, 11, "zhang", {99.5, 88.5, 89.5}, 0},
        {1002, 22, "li", {77.9, 56.5, 87.5}, 0},
        {1003, 11, "wang", {92.5, 99.0, 60.5}, 0}
    };
    struct Student temp;
    int i,j,n=3;

    scanf("%d",&temp.id);
    scanf("%d",&temp.class);
    scanf("%s",temp.name);
    scanf("%f%f%f", &temp.score[0], &temp.score[1], &temp.score[2]);
    temp.sum = temp.score[0] + temp.score[1] + temp.score[2];

        // 插入新学生信息
	for (i = 0; i < n; i++) {
		if (temp.sum > students[i].sum) {
			for (j = n; j > i; j--) {
				students[j] = students[j - 1];
			}
				students[i] = temp;
				n++;
				break;
		}
	}
	if (i == n) {
		students[n] = temp;
		n++;
	}

    // 按总成绩从高到低排序
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (students[i].sum < students[j].sum) {
				temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
    // 输出排序后的学生信息
    printf("学号,班级,姓名,数学,英语,计算机,总成绩\\n");
    for (i = 0; i < n; i++) {
        printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\\n", students[i].id, students[i].class, students[i].name, students[i].score[0], students[i].score[1], students[i].score[2], students[i].sum);
    }

    return 0;
}
}





















/*
void initInfoSystem(struct StudentInfoSystem *sys)

#include<stdio.h>
#include<string.h>
#define NAMELENGTH (30)
#define MAXSIZE (30)

struct Student {
	char name[NAMELENGTH];
	int id;
	int class;
	double scores[3];
	double sumScore;
};

struct StudentInfoSystem {
	struct Student students[MAXSIZE];
	int sum;
};

void initInfoSystem(struct StudentInfoSystem *sys);
void addStudents(struct StudentInfoSystem *sys);
int strToInt(char* str);
void deleteStudents(struct StudentInfoSystem *sys);
void findStudents(struct StudentInfoSystem *sys);
int StudentCompare(struct Student *former, struct Student *latter);
void orderStudents(struct StudentInfoSystem *sys);
void printStudents(struct StudentInfoSystem *sys);
void printStudent(struct Student *student);

int main() {
	int input = 0;
	int exit = 0;
	struct StudentInfoSystem sys;
	initInfoSystem(&sys);
	while (exit == 0) {
		printf("1.input\n2.delete\n3.select\n4.order\n");
		printf("5.output\n6.quit\nplease␣input␣your␣option\n");
		scanf("%d", &input);
		switch (input) {
			case 1:addStudents(&sys); break;
			case 2:deleteStudents(&sys); break;
			case 3:findStudents(&sys); break;
			case 4:orderStudents(&sys); break;
			case 5:printStudents(&sys); break;
			case 6:exit = 1; break;
		}
	}
	return 0;
}

void initInfoSystem(struct StudentInfoSystem *sys) {
	sys->sum = 0;
}

void addStudents(struct StudentInfoSystem* sys) {
	inti=0;
char exitInput[10] = "";
while ((sys->sum) < MAXSIZE) {
sys->students[sys->sum].sumScore = 0;
printf("id␣");
scanf("%d", &(sys->students[sys->sum].id));
printf("class␣");
scanf("%d", &(sys->students[sys->sum].class));
printf("name␣");
scanf("%s", sys->students[sys->sum].name);
for (i = 0; i < 3; i++) {
printf("score%d␣", i + 1);
scanf("%lf", &(sys->students[sys->sum].scores[i]));
sys->students[sys->sum].sumScore +=
sys->students[sys->sum].scores[i];
}
(sys->sum)++;

printf("continue?\n");
scanf("%s", exitInput);
if (strcmp(exitInput, "yes") != 0) break;

} 
}
int strIsNumber(char* str) { char *cur = str;
while ((*cur) != '\0') {
if ((*cur) < '0' || (*cur) > '9') return 0; cur++;
}
return 1; }
int strToInt(char* str) { char* cur = str;
int answer = 0;
while ((*cur) != '\0') {
answer = answer * 10 + (*cur) - '0';
cur++; }
return answer; }
void deleteStudents(struct StudentInfoSystem *sys) { int isNumber = 0;
int idFit = 0;
int nameFit = 0;
char exitInput[10] = ""; char input[NAMELENGTH] = ""; int i = 0, j = 0;
while ((sys->sum) > 0) {
scanf("%s", input);
isNumber = strIsNumber(input);
for(i=0; idFit = nameFit
i < (sys->sum); i++) {
isNumber && (sys->students[i].id == strToInt(input)); = (!isNumber) &&
(strcmp(input, sys->students[i].name) == 0);
if (idFit || nameFit) {
if(i< for
}
(sys->sum - 1)) { (j=i;j<(sys->sum-1);j++){ sys->students[j] = sys->students[j + 1];

}
118 (sys->sum)--;
119 }
120 }
121 printStudents(sys);
122 printf("continue?\n");
123 scanf("%s", exitInput);
124 if (strcmp(exitInput, "yes")) break;
125 }
126 }
127
128 void findStudents(struct StudentInfoSystem *sys) {
	char exitInput[10]; int input = 0; inti=0;
int idFit = 0;
int classFit = 0; int isFind = 0; while (1) {
	
	scanf("%d", isFind = 0;
for
&input);
i < (sys->sum); i++) {
(input == (sys->students[i].id));
(i=0;
idFit =
classFit = (input == (sys->students[i].class)); if (idFit || classFit) {
isFind = 1;
printStudent(&(sys->students[i])); }
}
if (isFind == 0) printf("there␣is␣no␣eligible␣student\n"); printf("continue?\n");
scanf("%s", exitInput);
if (strcmp(exitInput, "yes")) break;
}
StudentCompare(struct Student *former, struct Student *latter) { int compareClass = (former->class) - (latter->class);
if (compareClass != 0) return compareClass;
if ((former->sumScore) > (latter->sumScore)) return 1;
else if ((former->sumScore) < (latter->sumScore)) return -1; else return 0;


*/