#include<stdio.h>
struct employee
{
	char name[100];
	int id;
	float salary ;
};
int main()
{
	//struct employee hr;
	struct employee hr={"rakesh",1234,988876};

	printf("\n%s\n",hr.name);
	printf("\n%d\n",hr.id);
	printf("\n%f\n",hr.salary);

	return 0;
}
