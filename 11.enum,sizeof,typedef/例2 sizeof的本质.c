#include <stdio.h>
int f()
{
    printf("baby\n");
    return 0;
}
int main(void)
{
    int var=0;
    int size=sizeof(var++);
    printf("var=%d,size=%d\n",var,size);

    size=sizeof(f());
    printf("size=%d\n",size);
    return 0;
}
