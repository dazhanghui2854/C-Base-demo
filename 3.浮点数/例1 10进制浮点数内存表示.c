#include <stdio.h>
int main(void)
{
    float f=8.25;
    unsigned int* p=(unsigned int *)&f;
    printf("0x%08x\n",*p);
    return 0;
}
