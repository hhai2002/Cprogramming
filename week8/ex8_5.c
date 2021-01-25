#include <stdio.h>

int main() {

  int i,x,a,b,c;

  x=1;

  a=0;

  b=0;

  printf("Enter number of students: ");

  scanf("%d",&i);

  while(x<=i) {

    printf("Pass(1)/Fail(2)?: ");

    scanf("%d",&c);

    if(c==1)

      a++;

    if(c==2)

      b++;

    x++;

  }

  printf("Passed students:%d\n",a);

  printf("Failed students:%d\n",b);

  return 0;

}

