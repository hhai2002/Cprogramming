#include <stdio.h>

void getSale(int *a, int size){
  int i;
  for (i = 0; i < size; i++){
    scanf("%d", a + i);
  }
}

long totalSale(int *a, int size){
  int i;
  long total = 0;
  for (i = 0; i < size; i++)
    total = total + *(a + i);
  return total;
}

int main(){
  int n;
  scanf("%d", &n);
  int a[n];
  getSale(a, n);
  printf("%ld", totalSale(a, n));
  return 0;
}
