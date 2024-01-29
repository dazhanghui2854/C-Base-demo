#include <stdio.h>
#include <string.h>

int main()
{
    #define STR "Hello, \0D.T.Software\0"
    
    char* src = STR;
    char buf[255] = {0};
    
    snprintf(buf, sizeof(buf), src);
    
    printf("strlen(STR) = %d\n", strlen(STR));  //7
    printf("sizeof(STR) = %d\n", sizeof(STR));  //22
    
    printf("strlen(src) = %d\n", strlen(src));  //7
    printf("sizeof(src) = %d\n", sizeof(src));  //4
  
    printf("strlen(buf) = %d\n", strlen(buf));  //7
    printf("sizeof(buf) = %d\n", sizeof(buf));  //255
    
    printf("src = %s\n", src);  //helloi,
    printf("buf = %s\n", buf);  //hello,
    
    return 0;
}
