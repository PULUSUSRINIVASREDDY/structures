#include<stdio.h>
struct employee
{
	char name[100];
	int id;
	int  sal;
};

int main()
{
	struct employee arrhr[10];

	
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("enter the employee details\n");
		scanf("\n%s\n %d\n %d",arrhr[i].name,&arrhr[i].id,&arrhr[i].sal);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%s\n",arrhr[i].name);
	        printf("\n%d\n",arrhr[i].id);
		printf("\n%f\n",arrhr[i].sal);
	}
}




