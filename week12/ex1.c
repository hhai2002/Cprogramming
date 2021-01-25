#include <stdio.h>

int counteven(int* array, int size){
    int i, count=0;
    for(i=0;i<size;i++)
        if(*(array+i)%2==0)
            count++;
    return count;
}
int main(){
    int size;
    scanf("%d",&size);
    int a[size],i;
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",counteven(a,size));
    return 0;
}
