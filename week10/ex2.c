#include <stdio.h>

int main() {
    int k;
    printf("Enter number of elements: ");
    scanf("%d",&k);
    int s[k];
    int i, summax=0;
    for(i=0;i<k;i++){
        printf("#%d= ",i);
        scanf("%d",&s[i]);
    }
    printf("What you have created so far...\n");
    printf("# \t Element\n");
    for(i=0;i<k;i++)
        printf("#%d \t %d\n",i,s[i]);
    for(i=1;i<k;i++){
        int lmax=s[i];
        if((lmax>s[i-1])&&(lmax>s[i+1])){
            printf("Local maximum: \n");
            printf("#%d \t%d\n",i,lmax);
            summax=summax+lmax;
        }
    }
    printf("Sum of local maximum elements: %d",summax);
    return 0;
}
