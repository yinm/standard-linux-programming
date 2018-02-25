#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static void die(const char *s);

int
main(int argc, char *argv[])
{
  int fd;

  if (argc < 2) {
    fprintf(stderr, "%s: file name not given\n", argv[0]);
    exit(1);
  }

  fd = open(argv[1], O_RDONLY);
  if (fd < 0) {
    die(argv[1]);
  }

  if (rename(argv[1], argv[2]) < 0) {
    die(argv[1]);
  }

  if (close(fd) < 0) {
    die(argv[1]);
  }
}

static void
die(const char *s)
{
  perror(s);
  exit(1);
}