#include<stdio.h>

struct employee
{
	char name[100];
	int id;
	float salary;
}hr;

int main()
{

	printf("\nenter the employee details\n");
	scanf(" \n %s\n %d\n %f",hr.name,&hr.id,&hr.salary);
	printf("\n%s\n %d\n %f\n",hr.name,hr.id,hr.salary);
	return 0;

			
			
}

