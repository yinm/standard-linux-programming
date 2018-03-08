// ref: http://www.c-tipsref.com/tips/string/memset.html

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 16

int
main(void)
{
    char s[N];

    memset(s, 'z', N);
    s[N - 1] = '\0';

    printf("s: %s\n", s);
    return EXIT_SUCCESS;
}