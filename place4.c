#include<stdio.h>
void swapnum(int*n1,int*n2);
void main()
{
    int num1,num2;
    printf("\nenter two numbers \n");
    scanf("%d %d",&num1,&num2);
    swapnum(&num1,&num2);
    printf("\nmain:After swapping num1=%d num2=%d",num1,num2);
}
void swapnum(int *n1,int*n2)
{

    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("\nswapnum:after swapping n1=%d n2=%d",*n1,*n2);
}
