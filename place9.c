#include<stdio.h>
int main()
{
    int a= 231;
    int *p=&a;
    int **q=&p;
    printf("value of a =%d\n",a);
    printf("using pointer=%d\n",*p);
    printf("using double pointer =%d\n",**q);
    return  0;
}
