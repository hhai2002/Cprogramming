# include <stdio.h>

int main () {

  int a, b, c, least;

  printf (" Enter 3 integers : ");

  scanf ("%d%d%d", &a, &b, &c);

  if (a < b && a < c) {

    least = a;

  } else if (b < a && b < c) {

    least = b;

  } else if (c < b && c < a) {

    least = c;

  } else {

    printf (" Oops ! No smallest !\n");

    return 0;

  }

  printf (" Smallest is %d\n", least );

  return 0;

}

