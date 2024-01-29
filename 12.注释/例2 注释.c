#include<stdio.h>
int main()
{
    int y=1;
    int x=2;
    int *p=&x;
    y=x / *p;
    return 0;
}
