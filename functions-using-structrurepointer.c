#include<stdio.h>

struct employee
{
	char name[10];
	int id;
	float salary;
};

void func(struct employee *);
int main()
{
	
	struct employee hr={"srinu",1234,40.0};

	struct employee *ptr=&hr;

	func(&hr);
	return 0;
}
void func(struct employee *ptr)
{
	printf("\n%s\n",ptr->name);
	printf("\n%d\n",ptr->id);
	printf("\n%f\n",ptr->salary);
}
