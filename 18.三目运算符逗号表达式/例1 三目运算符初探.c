#include <stdio.h>

int main()
{   
    int i = 0;
    //int j = ++i+++i+++i;  //++i++-->1++
    
    int a = 1;
    int b = 4;
    int c = a+++b;  //a+++;1+4==>5  a===>2
    
    //int* p = &a;
    
    //b = b / *p;
    *(a<b?&a:&b)=3;

    printf("i = %d\n", i);
    //printf("j = %d\n", j);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
      
    return 0;
}
