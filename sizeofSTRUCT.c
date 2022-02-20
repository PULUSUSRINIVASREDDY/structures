#include<stdio.h>
#pragma pack(1);
//#pragma pack(0);

struct student
{
	char name[100];
	int id;
	float salary;
	double hike;
};
int main()
{
	printf("%ld",sizeof(struct student));
}
