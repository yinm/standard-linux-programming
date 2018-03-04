// ref: http://www.c-tipsref.com/reference/stdio/fflush.html

#include <stdio.h>
#include <stdlib.h>

void MySleep(int n);

int main(void)
{
    char buf[BUFSIZ];

    setbuf(stdout, buf);
    printf("Snoopy\n");

    MySleep(100000);
    fflush(stdout);

    return EXIT_SUCCESS;
}

void MySleep(int n)
{
    int i;
    for (i = 0; i < n * 5000; i++);
}