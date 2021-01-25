#include <stdio.h>

int main ()

{

  int i, n, f;

  printf (" Enter n: ");

  scanf ("%d", &n);

  f = 1; /* 0! */

  for (i = 1; i <= n; i++) {

    f *= i; /* Now , f = i! */

  }

  printf ("%d! = %d\n", n, f);

  return 0;

}

