#include <stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("Enter elements for matrix A.\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("A[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for matrix B.\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("B[%d][%d]: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Let's see two matrices you created...\n");
    printf("Matrix A\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d \t",a[i][j]);
        printf("\n");
    }
    printf("Matrix B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d \t",b[i][j]);
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                int x=0;
                c[i][j]=0;
                for(k=0;k<3;k++){
                    x=a[i][k]*b[k][j];
                    c[i][j]=c[i][j]+x;
                }
        }
    }
    printf("Matrix C=A*B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d \t",c[i][j]);
        printf("\n");
    }
    return 0;
}
