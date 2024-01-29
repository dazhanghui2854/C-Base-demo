#include <stdio.h>

#define NAME(n) name##n

int main()
{
    
    int NAME(1);  //name1
    int NAME(2);  //name2
    
    NAME(1) = 1;  //name1=1
    NAME(2) = 2;  //name2=2
    
    printf("%d\n", NAME(1));
    printf("%d\n", NAME(2));
    printf("%d\n",name1);

    return 0;
}
