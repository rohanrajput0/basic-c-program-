#include<stdio.h>
int main()
{

    int num=50;
    int*ptr=&num;
    printf("original value=%d\n",num);
    *ptr=100;
    printf("modified value=%d\n",num);
    return 0;
}
