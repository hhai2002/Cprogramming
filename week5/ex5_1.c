#include <stdio.h>

int main(void)

{

  double miles,kms;

  printf("Enter the distance in kilometers: ");

  scanf("%lf", & kms);

  miles = kms/1.604;

  printf("That equals %f miles.\n", miles);

  return 0;

}

