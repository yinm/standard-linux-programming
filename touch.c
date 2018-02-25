#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <utime.h>

int
main(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++) {
    if (utime(argv[i], NULL) < 0) {
      perror(argv[i]);
    }
  }

  exit(0);
}