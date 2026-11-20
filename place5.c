#include<stdio.h>
int main()
{
    int a=22,b=12;
    int*p=&a;
    int*q=&b;
    if (*p>*q)
        printf("largest number is =%d",*p);
    else
        printf("largest number is =%d",*q);
    return 0;
}
