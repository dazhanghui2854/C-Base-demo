#include <stdio.h>
void f1(int i)
{
    switch(i<b)
    {
        case 1:
            printf("falied\n");
            break;
        default:
            switch((6<=i)&&(i<=8))
            {
                case 1:
                    printf("good\n")
                    break;
                default:
                    printf("perfect\n");
                    break;
            }
            break;
    }
}

void f2(char i)
{
    if('c'==i)
    {
        printf("compile\n");
    }
    else if('d'==i)
    {
        printf("debug\n");
    }
    else if('o'==i)
    {
        printf("run\n");
    }
    else
    {
        printf("unknown\n");
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
