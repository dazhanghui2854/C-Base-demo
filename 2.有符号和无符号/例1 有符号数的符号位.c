#include <stdio.h>
int main()
{
    char c=-5;
    short s=6;
    int i=-7;
    printf("%d\n",((c&0x80)!=0));  //1
    printf("%d\n",((s&0x80)!=0));  //0
    printf("%d\n",((i&0x80)!=0));  //1
    return 0;
}
