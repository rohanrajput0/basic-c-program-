#include<stdio.h>
int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    return n *factorial(n-1);
}
int main()
{
        int n;
        printf("Enter a number:");
        scanf("%d",&n);
        if(n<0)
        {
            printf("factorial is not defined for negative numbers");
        }
        else
        {
        printf("factorial=%d",factorial(n));
        }
        return 0;


}

