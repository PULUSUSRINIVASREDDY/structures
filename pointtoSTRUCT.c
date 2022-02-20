#include<stdio.h>
struct employee
{
	char name[10];
	int id;
	float salary;
};
int main()
{
	struct employee hr={"srinu",1234.12};
	struct employee *ptr=&hr;
//	int *ptr;
//	*ptr=&hr;
	printf("\n%s\n",ptr->name);
	printf("\n%d\n",ptr->id);
	printf("\n%f\n",ptr->salary);
	return 0;
}
