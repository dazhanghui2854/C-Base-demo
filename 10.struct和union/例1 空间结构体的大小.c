#include <stdio.h>
struct TS
{

};
int main(void)
{
    struct TS t1;
    struct TS t2;

    printf("sizeof(struct TS)=%d\n",sizeof(struct TS));
    printf("sizeof(t1)=%d,&t1=%p\n",sizeof(t1),&t1);
    printf("sizeof(t2)=%d,&t2=%p\n",sizeof(t2),&t2);
}
