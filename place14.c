#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    int*p;
    printf("enter number of elements:");
    scanf("%d",&n);
    if(n<=0)
        return 1;
    p=malloc(n*sizeof(int));
    if(p==NULL)
        return 1;
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    printf("sum=%d",sum);
    free(p);
    return 0;
}
