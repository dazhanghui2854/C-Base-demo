#include <stdio.h>
const char *f(const int i)
{
    //i=5;
    return "baby";
}
int main(void)
{
    const char *pc=f(0);
    printf("%d\n",pc);
    pc[6]='_';
    printf("%s\n",pc);
    return 0;
}
