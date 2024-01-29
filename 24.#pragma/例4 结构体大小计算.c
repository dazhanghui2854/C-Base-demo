#include <stdio.h>

#pragma pack(8)

struct S1
{				//对齐方式 便宜地址 大小
    short a;	//2			0		2
    long b;		//4			4		4
};

struct S2
{					//对齐方式 便宜地址 大小
    char c;			//1			0		1
    struct S1 d;	//4			4		8
    double e;		//8			16		8
};

#pragma pack()

int main()
{
    printf("%d\n", sizeof(struct S1));
    printf("%d\n", sizeof(struct S2));

    return 0;
}
