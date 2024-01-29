#include <stdio.h>

void f()
{
#if ( PRODUCT == 1 )
    printf("This is a low level product!\n");
#elif ( PRODUCT == 2 )
    printf("This is a middle level product!\n");
#elif ( PRODUCT == 3 )
    printf("This is a high level product!\n");
#endif
}

int main()
{
    f();
    
    printf("1. Query Information.\n");
    printf("2. Record Information.\n");
    printf("3. Delete Information.\n");

#if ( PRODUCT == 1 )
    printf("4. Exit.\n");
#elif ( PRODUCT == 2 )
    printf("4. High Level Query.\n");
    printf("5. Exit.\n");
#elif ( PRODUCT == 3 )
    printf("4. High Level Query.\n");
    printf("5. Mannul Service.\n");
    printf("6. Exit.\n");
#endif
    
    return 0;
}
