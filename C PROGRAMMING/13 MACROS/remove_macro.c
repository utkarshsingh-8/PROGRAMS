// We can remove already defined macros using :  #undef MACRO_NAME

#include <stdio.h>
#define LIMIT 100
int main()
{
    printf("%d\n", LIMIT);
    // removing defined macro LIMIT

#undef LIMIT
    // Next line causes error as LIMIT is not defined
    printf("%d", LIMIT);

    return 0;
}