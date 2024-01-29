#include <stdio.h>
int f1()
{
    int r=0;
    r++;
    return r;
}
int f2()
{
    static int r=0;
    r++;
    return r;
}
int main()
{
    auto int i=0;  //显示声明auto属性，i为站变量
    static int k=0;  //局部变量k到存储区位于静态区，作用域位于main中
    register int j=0;  //向编译器申请将j存储与寄存器中

    printf("%p\n",&i);
    printf("%p\n",&k);
    //printf("%p\n",&j);  //error
    
    for(i=0;i<5;i++)
    {
        printf("%d\n",f1());
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",f2());
    }
    return 0;
}
