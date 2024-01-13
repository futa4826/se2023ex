#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int i = 0;
  for (i = 0; str[i] != NULL; i++)
    ;
  printf("%s, %d", str, i);
  return 0;
}