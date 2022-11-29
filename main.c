#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME   20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[MAX_NAME];
	double grade;
};

int main(int argc, char *argv[]) {
	
	struct student s1 = {2211758 , "¹Ú¼ÒÇö", 4.3};
	
	s1.ID = 1004;
	strcpy(s1.name,"±è¼÷¸í");
	s1.grade = 3.7;
	
	printf("ID : %i\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("score : %f\n", s1.grade);

	
	return 0;
}
