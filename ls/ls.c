#include <dirent.h>
#include <fcntl.h> /* flags for read and write */
#include <stdio.h>
#include <string.h>
#include <sys/dir.h>
#include <sys/stat.h> /* structure returned by stat */
#include <sys/types.h>

void fsize(char *);
void dirwalk(char *, void (*fcn)(char *));

#define MAX_PATH 1024

int main(int argc, char **argv) {
  char *dirname = "ha";
  if (argc == 1)
    printf("No arg");
  else
    printf("%s", argv[1]);
  Dirent *dp;
  DIR *dp;

  dp = opendir(dirname);
}
