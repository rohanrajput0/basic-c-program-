#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,max;
    printf("enter number of elements:");
    scanf("%d",&n);
    if(n<=0)
        return 1;
    p=malloc(n*sizeof(int));
    if(p==NULL)
        return 1;
    printf("enter elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    max=p[0];
    for(int i=1;i<n;i++)
    {
        if(p[i]>max)
            max=p[i];
    }
    printf("largest element=%d",max);
    free(p);
    return 0;


}

