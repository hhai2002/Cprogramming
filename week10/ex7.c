#include <stdio.h>

int sym(int a[],int size){
    int x;
    for(x=0;x<=(size/2);x++){
        if(a[x]!=a[size-1-x])
            return 0;
    }
    return 1;
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
    switch(sym(a,size)){
        case 0:printf("Not symmetric.");return 0;
        case 1:printf("Symmetric.");return 0;
    }
}
