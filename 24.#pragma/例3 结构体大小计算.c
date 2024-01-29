#include <stdio.h>

#pragma pack(4)
struct Test1
{					//对齐参数 偏移地址 大小
    char  c1;		//2			0		1
    short s;		//2			2		2
    char  c2;		//1			4		1
    int   i; 		//4			8		4
};
#pragma pack()

#pragma pack(4)
struct Test2
{					//对齐参数 偏移地址 大小
    char  c1;		//1			0		1
    char  c2;		//1			1		1
    short s;		//2			2		2
    int   i;		//4			4		4
};
#pragma pack()

int main()
{
    printf("sizeof(Test1) = %d\n", sizeof(struct Test1));
    printf("sizeof(Test2) = %d\n", sizeof(struct Test2));

    return 0;
}
