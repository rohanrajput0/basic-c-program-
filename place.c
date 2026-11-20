#include<stdio.h>
int main()
{
int a=10;
int*p=&a;
printf("values of a=%d\n",a);
printf("adders of a=%p\n",&a);
printf("pointer value=%p\n",p);
printf("value using pointer=%d\n",*p);
return 0;
}
