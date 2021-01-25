#include <stdio.h>

int arraycheck(int a[],int b[], int size){
    int i;
    for(i=0;i<size;i++){
        if(a[i]!=b[i]){
            return 0;
        }
        else
            return 1;
    }
}
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    int b[size];
    int i;
    printf("Enter elements for two arrays.\n");
    for(i=0;i<size;i++){
        printf("Enter element #%d of first array: ",i);
        scanf("%d",&a[i]);
        printf("Enter element #%d of second array: ",i);
        scanf("%d",&b[i]);
    }
    printf("Let's see what you created so far...\n");
    printf("# \t 1st \t 2nd\n");
    for(i=0;i<size;i++)
        printf("%d \t %d \t %d\n",i,a[i],b[i]);
    switch(arraycheck(a,b,size)){
        case 0:printf("Arrays are not equal.");return 0;
        case 1:printf("Arrays are equal.");return 0;}
}


