#include <stdio.h>
int main(void)
{
    int *p=(int *)malloc(0);
    printf("p=%p\n",p);
    free(p);
    return 0;
}
