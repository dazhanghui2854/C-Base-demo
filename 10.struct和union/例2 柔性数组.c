#include <stdio.h>
struct SoftArray
{
    int len;
    int array[];
};
int main(void)
{
    printf("sizeof(struct SoftArray)=%d\n",sizeof(struct SoftArray));
    return 0;
}
