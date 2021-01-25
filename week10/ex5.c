#include <stdio.h>

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
    int countzero=0;
    for(i=0;i<size;i++){
        if(a[i]==0)
            countzero++;
    }
    printf("There are %d zero elements in array.\n",countzero);
    int x,countx;
    printf("What element are you looking for?");
    scanf("%d",&x);
    for(i=0;i<size;i++){
        if(a[i]==x)
            countx++;
    }
    printf("%d element has appeared for %d times in array.",x,countx);
    return 0;
}
