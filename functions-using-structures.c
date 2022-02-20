#include<stdio.h>

struct employee
{
    char name[20];
    int id;
    int salary;
};

void func(char name[], int id, int salary);

int main()
{
    struct employee hr = {"SRINU", 1234, 78.0};
    func(hr.name, hr.id, hr.salary);
    return 0;
}

void func(char name[], int id, int salary)
{
    printf("\n%s\n", name);
    printf("\n %d\n", id);
    printf("\n%d\n", salary);
   
}




