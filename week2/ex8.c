#include <stdio.h>
int main() {
  char ten[20];
  printf("What's the name of person sitting next to you?\n");
  scanf("%s",&ten);
  printf("Hello, %s",ten);
  return 0;
}
