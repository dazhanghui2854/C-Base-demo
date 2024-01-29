#include <stdio.h>
#include <malloc.h>

int arr[40]={1,2,3,4,5,6,7};
int main()
{
    int* p1 = (int*)malloc(40*sizeof(int));
    //int* p2 = (int*)1234567;  //p2是一个野指针
	int *p2=arr;  //p2合法
    int i = 0;
    
    for(i=0; i<40; i++)
    {
        *(p1 + i) = 40 - i;  //由于指针运算产生了野指针，改写了非法的内存地址
    }

    free(p1); 
    
    for(i=0; i<40; i++)
    {
        p1[i] = p2[i];  //使用已经释放的内存空间
    }
    
    return 0;
}

