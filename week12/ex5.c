#include <stdio.h>

void reverse1(int a[], int size){
    int i = 0, j = size - 1, x;
  while (i < j){
    x = a[i];
    a[i] = a[j];
    a[j] = x;
    i++;
    j--;
  }
}
void reverse2(int * a, int size){
    int i = 0, j = size - 1, x;
  while (i < j){
    x = *(a+i);
    *(a+i) = *(a+j);
    *(a+j) = x;
    i++;
    j--;
  }
}
int main(){
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
    reverse1(a,n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    reverse2(a,n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
  return 0;
}
