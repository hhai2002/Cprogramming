#include<stdio.h>

float m,v,w;

int kinetic() {

  w=m*v*v/2;

}

void main() {

  printf("Enter element's mass in kg: ");

  scanf("%f",&m);

  printf("Enter element's speed in m/s: ");

  scanf("%f",&v);

  kinetic();

  printf("Kinetic energy of the element is: %f J",w);

}

