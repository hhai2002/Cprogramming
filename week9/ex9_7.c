#include<stdio.h>

long n;

int x,k;

int checknum() {

  if ((n%10==n)&&(n%2==1)){

    k=1;

    return 1;}

  else if((n%10==n)&&(n%2!=1)){

    k=0;

    return 1;

  }

  if(n%2==1)

    k=1;

  else

    k=0;

  while(n!=0){

    x=n%10;

    if(x%2!=k)

      return 0;

    else

      n=(n-n%10)/10;

  }

  return 1;

}

void main() {

  printf("Enter number here: ");

  scanf("%ld",&n);

  if(checknum(n)==0)

    printf("Both odd and even figures exist.");

  else{

    if(k==1)

      printf("All figures are odd.");

    else

      printf("All figures are even.");

  }

}

