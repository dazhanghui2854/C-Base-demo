#include <stdio.h>
#include <malloc.h>
int fun(int n)
{
    int i=0;
    int ret=0;
    int *p=(int *)malloc(sizeof(int)*n);
    do
    {
        if(NULL==p)break;
        if(n<5)break;
        if(n>100)break;
        for(i=0;i<n;i++)
        {
            p[i]=i;
            printf("%d ",p[i]);
        }
        ret=1;
    }while(0);
    printf("free(p)\n");
    free(p);
    return ret;
}
int main(void)
{
    if(fun(10))
    {
        printf("ok\n");
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
