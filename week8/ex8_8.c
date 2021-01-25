#include <stdio.h>

int main() {

  int a,b,c;

  printf("Enter number: ");

  scanf("%d",&a);

  b=1;

  c=1;

  while (c<=a) {

    b=b*c;

    c++;

  }

  printf("%d!=%d",a,b);

  return 0;

}

