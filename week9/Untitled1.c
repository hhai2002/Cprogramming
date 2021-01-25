#include<stdio.h>
int a;
int LeapYear(){
    if(a%400==0)
        return 1;
    else if(a%4==0) {
        if(a%100!=0)
            return 1;
        else
            return 0;
    }
}
int main () {
    printf("Enter year: ");
    scanf("%d",&a);
    if(LeapYear(a)==1)
        printf("%d is a leap year.",a);
    else
        printf("%d is not a leap year.",a);
}
