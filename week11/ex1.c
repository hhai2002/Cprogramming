#include<stdio.h>
int main() {
    int x,y,z;
    int *px=&x;
    printf("Enter three integers: ");
    scanf("%d%d%d",&x,&y,&z);
    printf("%d\n",*px);
    *px=y;
    printf("%d\n",*px);
    *px=z;
    printf("%d\n",*px);
    return 0;
}