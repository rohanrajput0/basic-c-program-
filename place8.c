#include<stdio.h>
int main()
{

    int a[5]={10,20,30,40,50};
    int*p=a;
    int i,temp;
    for(i=0; i<2;i++)
    {

        temp =*(p+i);
        *(p+i)=*(p+4-i);
        *(p+4-i)=temp;
    }
    printf("reversed array:\n");
    for(i=0;i<5;i++)
        printf("%d\n",*(p+i));
    return 0;
}
