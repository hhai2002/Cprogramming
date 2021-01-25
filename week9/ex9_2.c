#include<stdio.h>

#include<math.h>

int a,b,c,x;

int prime(int a) {

  if(a==2)

    b=1;

  else

    for(x=2;x<=sqrt(a)+1;x++)

      if(a%x==0){

	b=0;

	break;}

      else

	b=1;

}

void main() {

  printf("Enter number: ");

  scanf("%d",&a);

  for(c=2;c<=a;c++)

    {prime(c);

      if(b==1)

	printf("%d\n",c);

    }

}

