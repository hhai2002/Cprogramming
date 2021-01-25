#include<stdio.h>

int x,b;

int wages(){

  if((x<10)||(x>65))

    printf("Invalid data.");

  else

    if(x<=40)

      b=15000*x;

    else

      b=15000*40+15000*1.5*(x-40);

  return b;

}

int main() {

  printf("Enter hours: ");

  scanf("%d",&x);

  wages(x);

  printf("The salary is %d VND.",b);

}

