#include <stdio.h>

int main() {
    int k;
    printf("Enter number of elements: ");
    scanf("%d",&k);
    int s[k];
    int i, sumodd=0;
    for(i=0;i<k;i++){
        printf("s[%d]= ",i);
        scanf("%d",&s[i]);
    }
    printf("# \t Element\n");
    for(i=0;i<k;i++)
        printf("#%d \t %d\n",i,s[i]);
    int min=s[0];
    for(i=0;i<k;i++){
        if(min>s[i])
            min=s[i];
        if(s[i]%2==1)
            sumodd=sumodd+s[i];
    }
    printf("Sum of odd numbers:%d\nThe minimum element:%d",sumodd,min);
    return 0;
}
