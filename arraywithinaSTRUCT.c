#include<stdio.h>
struct employee
{
	char name[100];
	int id;
	int salary[3];
};

int main()
{
	int i,j;
	struct employee arrhr[10];
	for(i=0;i<3;i++)
	
	{
			printf("\n%d enter the details\n",i+1);
			printf("enter the name\n");
			
			scanf("\n%s",arrhr[i].name);

			printf("\nenter the id\n");
			scanf("\n%d",&arrhr[i].id);
	}	
			for(j=0;j<3;j++)
			{
				printf("\nenter the salary\n");
				scanf("\n%d",&arrhr[i].salary[j]);
			}


	

	for(i=0;i<3;i++)
	{
		printf("\n employee of the data%d\n",i+1);
	printf("\nname::%s\nid::%d\n",arrhr[i].name,arrhr[i].id);
	}
	for(j=0;j<3;j++)
	{	
	printf("\n%d\n",arrhr[i].salary[j]);
	}
	return 0;

}			

