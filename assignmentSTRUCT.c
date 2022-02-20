#include<stdio.h>
struct employee
{
	char name[100];
	int id ;
	float salary;
};
int main()
{
	struct employee hr1={"SRINU",1234,340000};
	struct employee hr2;
	hr2=hr1;
	printf("\n%s\n",hr1.name);
	printf("\n%d\n",hr1.id);
	printf("\n%f\n",hr1.salary);
	printf("\n%s\n",hr2.name);
	printf("\n%d\n",hr2.id);


	printf("\n%f\n",hr2.salary);

	return 0;

}

