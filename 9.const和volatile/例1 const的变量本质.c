#include <stdio.h>
int main(void)
{
    const int cc=1;
    printf("cc=%d\n",cc);
    cc=3;

    printf("cc=%d\n",cc);
    return 0;
}
