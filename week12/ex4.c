#include <stdio.h>

int main(){
  int n, i, j, k;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++){
    for (k = 0; k < n - i; k++){
      for (j = i; j <= i+k; j++)
        printf("%d ", a[j]);
      printf("\n");
    }
  }
  return 0;
}
