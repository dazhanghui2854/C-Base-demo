#include <stdio.h>
void f1(int i)
{
    if(i<6)
    {
        printf("failed!\n");
    }
    else if((6<=i)&&(i<=8))
    {
        printf("Good!\n");
    }
    else
    {
        printf("perfect!\n");
    }
}

void f2(char i)
{
    switch(i)
    {
        case 'c':
            printf("compile\n");
            break;
        case 'd':
            printf("debug\n");
            break;
        case 'o':
            printf("object\n");
            break;
        case 'r':
            printf("run\n");
            break;
        //case 0.1:
           // printf("0.1\n");
           // break;
        default:
            printf("unknow\n");
            break;
    }
}
int main(void)
{
    f1(5);
    f1(9);
    f1(7);
    f2('o');
    f2('d');
    f2('e');
    //f2(0.1);
    return 0;
}
