#include <stdio.h>



void main (void) {

  double x;

  int n;

  printf("Please enter an integer: ");

  scanf("%d", &n);

  printf("The integer was %d\n\n", n);

  printf("Please enter a double: ");

  scanf("%lf", &x);

  printf("The double was %g\n\n", x);

  printf("Please enter an integer and a floating-point number:");

  scanf("%d%lf", &n, &x);

  printf("The numbers were %d %g\n", n, x);

}

