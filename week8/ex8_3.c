#include <stdio.h>



#include <math.h>



int main() {



  double a,b,c;



  printf("Enter value:");



  scanf("%lf",&a);



  b=(a+1)/2;



  do {



    c=b;



    b=0.5*(b+a/b);



  }



  while(fabs(b-c)>0.0001);



  printf("\nResult is %lf",b);



  return 0;



}



