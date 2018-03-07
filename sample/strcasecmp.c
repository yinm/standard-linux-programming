// ref: http://www.orchid.co.jp/computer/cschool/CREF/stricmp.html

#include <stdio.h>

int main()
{
    printf("%d\n", strcasecmp("xyz", "xyz"));
    printf("%d\n", strcasecmp("abc", "ABC"));
    printf("%d\n", strcasecmp("abc", "ABD"));
    printf("%d\n", strcasecmp("abc", "ABO"));
}