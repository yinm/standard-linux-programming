// ref: http://www.c-tipsref.com/tips/string/strrchr.html#sample

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[] = "I don't want to march as much as possible.";
    char *ret;
    int c;

    puts("文字を入力してください。");
    c = getchar();

    if ((ret = strrchr(s, c)) != NULL) {
        printf("'%c'が一番最後に見つかった位置は、%d番目です.\n", c, ret - s);
    } else {
        printf("'%c'はありませんでした.\n", c);
    }

    return EXIT_SUCCESS;
}