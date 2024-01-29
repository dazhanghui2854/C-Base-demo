#include <stdio.h>

int* g()
{
    int a[10] = {0};
    
    return a;
}

void f()
{
    int i=0;
    int b[10]={0,1,2,3,4,5,6,7,8,9};
    int* pointer = g();
    for(i=0;i<10;i++)
    {
        b[i]=pointer[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
}

int main()
{
    f();
    
    return 0;
}
