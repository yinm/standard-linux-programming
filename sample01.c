#include <stdio.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
    int opt;

    while ((opt = getopt(argc, argv, "af:tx")) != -1) {
        switch (opt) {
            case 'a':
                puts("-a");
                break;
            case 'f':
                puts("-f");
                printf("optarg = %s\n", optarg);
                break;
            case 't':
                puts("-t");
                break;
            case 'x':
                puts("-x");
                break;
            default: // '?'
                puts("?");
                break;
        }
    }
}