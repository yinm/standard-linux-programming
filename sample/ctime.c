// ref: http://www.orchid.co.jp/computer/cschool/CREF/ctime.html

#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;

    now = time(NULL);
    printf("%s\n", ctime(&now));
}