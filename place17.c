#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct employee e[3];
    int max=0;
    for(int i=0;i<3;i++)
    {
        printf("Enter ID,name and salary:");
        scanf("%d %29 %f",&e[i].id,e[i].name,&e[i].salary);
    }
    for(int i=1;1,i<3;i++)
    {
        if(e[i].salary>e[max].salary)
            max=i;
    }
    printf("\nHighest Paid Employee\n");
    printf("ID=%d\n",e[max].id);
    printf("name=5s\n",e[max].name);
    printf("salary=%.2f\n",e[max].salary);
    return 0;
}
