#include <stdio.h>
typedef int int32;
typedef unsigned char byte;
typedef struct _tag_ts
{
    byte b1;
    byte b2;
    short s;
    int32 i;
}ts;

int main(void)
{
    int32 i32;
    byte b;
    ts t;
    printf("%d,%d\n",sizeof(int32),sizeof(i32));  //4 4
    printf("%d,%d\n",sizeof(byte),sizeof(b));  //1 1
    printf("%d,%d\n",sizeof(ts),sizeof(t));//  8 8
}
