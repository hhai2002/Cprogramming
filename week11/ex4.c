#include<stdio.h>
void swap(int *a, int *b, int *c){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=*c;
    *c=tmp;
}
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    swap(&a,&b,&c);
    printf("a=%d \t b=%d \t c=%d",a,b,c);
    return 0;
}