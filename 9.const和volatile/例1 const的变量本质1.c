#include <stdio.h>
int main(void)
{
    const int cc=1;
    int *p=(int *)&cc;
    printf("cc=%d\n",cc);
    *p=3;

    printf("cc=%d\n",cc);
    return 0;
}
