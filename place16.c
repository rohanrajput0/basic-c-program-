#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct student s;
    printf("enter roll number:");
    scanf("%d",&s.roll);
    printf("enter name:");
    scanf("%29s",s.name);
    printf("enter marks:");
    scanf("%f",&s.marks);
    printf("\nstudent details\n");
    printf("roll=%d\n",s.roll);
    printf("name=%s\n",s.name);
    printf("marks=%.2f\n",s.marks);

    return 0;
}
