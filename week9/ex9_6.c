#include<stdio.h>

double celsius(double f){

  double c;

  c=5*(f-32)/9;

  return c;

}

int main() {

  double a;

  printf("Enter Fahrenheit temperature: ");

  scanf("%lf",&a);

  printf("The Celsius temperature is %lf.\n",celsius(a));

  int m;

  printf("The table of Celsius temperature - 20 values:\n");

  for (m=0;m<=20;m++){

    printf("%d        %lf\n",m,celsius(m));

  }

}
