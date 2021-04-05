#include <stdio.h>
#include<stdlib.h>
int main() {
	char name[20];
	int rollno,age,totalmarks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("student.c","a"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter Roll no: ",i+1);
		scanf("%d", &rollno);
		printf("Name:");
		scanf("%s", name);
		printf("Age:");
		scanf("%d", &age);
		printf("Enter total marks: ");
		scanf("%d",&totalmarks);
		fprintf(fptr,"\nRoll no = %d \nName: %s \nAge = %d \nTotal Marks=%d \n",rollno,name,age,totalmarks);
	}
	fclose(fptr);
	return 0;
}