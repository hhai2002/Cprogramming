#include<stdio.h>

#include<math.h>

int sum_cube(int x) {

  int i,sum=0;

  for(i=1;i<=x;i++)

    sum=sum+i*i*i;

  return sum;

}

int submultiples(int x){

  int i;

  printf("The submultiples of %d are:",x);

  for(i=1;i<x;i++){

    if(x%i==0)

      printf("%d ",i);

  }

}

int first_perfect_square_numbers(int x){

  int i;

  printf("The first %d square numbers are:",x);

  for(i=1;i<=x;i++)

    printf("%d ",i*i);

}

int main() {

  int x;

  printf("Enter number: ");

  scanf("%d",&x);

  printf("The sum of %d first cube intergers from 1 is %d\n",x,sum_cube(x));

  submultiples(x);

  printf("\n");

  first_perfect_square_numbers(x);

}

