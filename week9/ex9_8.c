#include<stdio.h>

double a,b,c,d,e,max,min,score;

double getJudgescore() {

  max=a;

  if(max<b)

    max=b;

  if(max<c)

    max=c;

  if(max<d)

    max=d;

  if(max<e)

    max=e;

  min=a;

  if(min>b)

    min=b;

  if(min>c)

    min=c;

  if(min>d)

    min=d;

  if(min>e)

    min=e;

}

double CalcScore() {

  score=(a+b+c+d+e-max-min)/3;

  return score;

}

int main() {

  printf("Enter judge score: ");

  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);

  getJudgescore();

  printf("The score is %2f.",CalcScore());

}

