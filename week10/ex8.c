#include<stdio.h>

int main() {
    int size,i;
    printf("Enter number of elements in array: ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("You have entered: \n");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("The reverse order of elements is: \n");
    for(i=size-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}