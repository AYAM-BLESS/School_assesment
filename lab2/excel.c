#include<unistd.h>
#include<stdio.h>
int main() {
char *arg3 = ".";
char *arg2 = "-a";
char *arg1 = "-l";
char *binary_path = "/bin/ls";
// System call to perform the ls -la operation in the
  // CWD (Current Working Directory)
execl(binary_path, arg1, arg2, arg3, NULL);
return 0;
}