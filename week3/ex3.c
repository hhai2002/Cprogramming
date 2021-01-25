#include <stdio.h>



int main(void) {

  char name[16];

  printf("What's your name? ");

  scanf("%15s", name);

  printf("Hi there, %s!\n", name);

  return 0;

}
