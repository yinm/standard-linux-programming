// ref: http://www.c-tipsref.com/reference/string/strcat.html

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 256

int main(void) 
{
    char s1[] = "Snoopy";
    char s2[] = "Charlie Brown";

    strcat(s1, s2);
    printf("s1 + s2 : %s\n", s1);

    return EXIT_SUCCESS;
}