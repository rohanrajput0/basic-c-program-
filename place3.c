#include<stdio.h>
void swapnum(int x,int y);
void main()
{
int a,b;
printf("\nEnter the values of a and b\n");
scanf("%d %d",&a,&b);
swapnum(a,b);
printf("\nMain function: Numbers after swapping a=%d b%=% d",a,b);
}
void swapnum(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
printf("\nswapnum function:Numbers after swapping x=%d y=% d",x,y);
}


