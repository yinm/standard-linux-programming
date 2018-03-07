// ref: http://www.c-tipsref.com/reference/string/strspn.html 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s1[] = "Joe Cool";
    char s2[] = "Joe";
    char s3[] = "Joe Black";
    size_t n;

    n = strspn(s1, s2);
    printf("s1:%s, s2:%s のとき: %d\n", s1, s2, n);

    n = strspn(s1, s3);
    printf("s1:%s, s3:%s のとき: %d\n", s1, s3, n);

    return EXIT_SUCCESS;
}