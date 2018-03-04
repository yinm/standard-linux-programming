// ref: http://www.c-tipsref.com/reference/ctype/isspace.html

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    if (isspace(' ')) {
        puts("標準空白類文字です。");
    } else {
        puts("標準空白類文字ではありません。");
    }

    if (isspace('\t')) {
        puts("標準空白類文字です。");
    } else {
        puts("標準空白類文字ではありません。");
    }

    if (isspace('9')) {
        puts("標準空白類文字です。");
    } else {
        puts("標準空白類文字ではありません。");
    }

    return EXIT_SUCCESS;
}