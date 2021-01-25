#include <stdio.h>

int sort1(int a[], int size){
    int i,j,tmp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]<a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}
int sort2(int a[], int size){
    int i,j,tmp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if((a[i]%2==1)&&(a[j]%2==1)&&(a[i]>a[j])){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<size;i++){
        if(a[i]%2==1)
            printf("%d \t %d\n",i,a[i]);
    }
}
int main() {
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
    printf("Let's see what you created so far...\n");
    printf("# \t Element\n");
    for(i=0;i<size;i++)
        printf("%d \t %d\n",i,a[i]);
    sort1(a,size);
    printf("The descending order of elements is:\n");
    for(i=0;i<size;i++)
        printf("%d \t %d\n",i,a[i]);
    printf("The ascending order of odd elements is:\n");
    sort2(a,size);
    return 0;
}


