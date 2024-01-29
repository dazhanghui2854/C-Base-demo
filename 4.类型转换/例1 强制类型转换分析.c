#include <stdio.h>
struct ts
{
    int i;
    int j;
};
struct ts t;
int main(void)
{
    short s=0x1122;
    char c=(char)s;  //0x22
    int i=(int)s;  //0x22
    int j=(int)3.1415;  //3
    unsigned long long  p=(unsigned long)&t;
    //long l=(long)t;  //error
    //t=(struct t)l;  //error

    printf("s=%x\n",s);
    printf("c=%x\n",c);
    printf("i=%x\n",i);
    printf("j=%x\n",j);
    printf("p=%x\n",p);
    printf("&t=%p\n",&t);
    return 0;
}
