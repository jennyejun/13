#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int ID;
	char name[20];
	double grade;
};

void main(void) {
	struct student s1 = { 0000000, "KIM", 0.0 };
	struct student* stdPtr;

	stdPtr = &s1;

	s1.ID = 2411838;
	strcpy(s1.name, "YEJUN");
	s1.grade = 4.3;

	stdPtr->ID = 2511838;
	strcpy(stdPtr->name, "HAN");
	stdPtr->grade = 4.5;

	printf("ID: %d\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("grade: %f\n", s1.grade);
	printf("\n");
	printf("ID: %d\n", stdPtr->ID);
	printf("name: %s\n", stdPtr->name);
	printf("grade: %f\n", stdPtr->grade);
}