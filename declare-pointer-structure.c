#include<stdio.h>
struct employee
{
        char name[10];
        int id;
        float salary;
};
int main()
{

        struct employee hr;
        struct employee *ptr=&hr;
	printf("\nenter the employee details \n");
	scanf("\n%s\n%d\n%f",ptr->name,&ptr->id,&ptr->salary);
//      int *ptr;
//      *ptr=&hr;
        printf("\n%s\n",ptr->name);
        printf("\n%d\n",ptr->id);
        printf("\n%f\n",ptr->salary);
        return 0;
}

