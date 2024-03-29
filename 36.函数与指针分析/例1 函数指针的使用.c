#include <stdio.h>

typedef int(FUNC)(int);

int test(int i)
{
    return i * i;
}

void f()
{
    printf("Call f()...\n");
}

int main()
{
    FUNC* pt = test;
    void(*pf)() = &f;
    
    printf("pf = %p\n", pf);
    printf("f = %p\n", f);
    printf("&f = %p\n", &f);
    
    pf();
    
    (*pf)();  //pf()
    
    printf("Function pointer call: %d\n", pt(2));  //4
    
    return 0;
}

