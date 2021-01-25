#include <stdio.h>

int main() {

  int a,b;

  a=1;

  printf("Enter number: ");

  scanf("%d",&b);

  do {

    printf("%d ",a);

    a++;

  }

  while(a<=b);

  return 0;

}

