#include<stdio.h>
struct employee
{
    int id;
    float salary;
};
void updatesalary(struct employee*emp)
{
    emp->salary=emp->salary+5000;
}
int main()
{
    struct employee e={101,25000};
    printf("old salary=%.2f\n",e.salary);
    updatesalary(&e);
    printf("New salary=%.2f\n",e.salary);
    return 0;
}



