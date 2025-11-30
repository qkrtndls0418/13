#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int     ID;
	char    name[20];
	double  grade;
};

int main(int argc, char *argv[]) {
	
	struct student stud = {10, "Suin", 4.3};
	struct student *stdPtr;
	
	stdPtr = &stud;
	
	stdPtr -> ID = 17;
	strcpy(stdPtr->name, "PARK");
	stdPtr->grade = 2.0;
	
	printf("ID : %i, name : %s, grade : %1f\n", stdPtr->ID, stdPtr->name, stdPtr->grade);
	
	
	system ("PAUSE");
	return 0;
}
