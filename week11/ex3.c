#include<stdio.h>
int main() {
    float a,b,c;
    float *p=&a;
    printf("Enter three values: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Each value has been added 100.\n");
    printf("%f\n",*p+100);
    p=&b;
    printf("%f\n",*p+100);
    p=&c;
    printf("%f\n",*p+100);
}