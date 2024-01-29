#include <stdio.h>
typedef int Int32;
struct _tag_point
{
    int x;
    int y;
};
typedef struct _tag_point point;
typedef struct
{
    int length;
    int array[];
}softarray;
typedef struct _tag_list_node listnode;
struct _tag_list_node
{
    listnode *next;
};
int main(void)
{
    Int32 i=-100;
    //unsigned Int32 li=0;
    point p;
    softarray *sa=NULL;
    listnode *node=NULL;
    return 0;
}
