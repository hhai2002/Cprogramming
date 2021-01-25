#include <stdio.h>

int rev(int a[],int size){
    int x,tmp;
    for(x=0;x<=(size/2);x++){
        tmp=a[x];
        a[x]=a[size-x-1];
        a[size-x-1]=tmp;
    }
}
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    int i;
    printf("Enter elements for arrays.\n");
    for(i=0;i<size;i++){
        printf("Enter element #%d of array: ",i);
        scanf("%d",&a[i]);
    }
    rev(a,size);
    for(i=0;i<size;i++)
        printf("%d \t",a[i]);
}
