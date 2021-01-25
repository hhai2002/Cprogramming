#include <stdio.h>
#include <float.h>
/*double * maximum(double* array, int size){
    int i;
    double *max,*p;
    max=array;
    if(array==NULL)
        return NULL;
    for(p=array+1;i<array+size;i++){
        if(*p>*max)
            max=p;
    }
    return max;
}*/
double*maximum(double*a,int size);
int main(){
    int size;
    scanf("%d",&size);
    double a[size];
    for(int i=0;i<size;i++){
        scanf("%lf",&a[i]);
    }
    printf("%p",*maximum(a,size));
    return 0;
}
double* maximum(double *a, int size){
  double max = __DBL_MIN__;
  double *point;
  for (int i = 0; i < size; i++)
    if (max < *(a+i)){
      max = *(a+i);
      point = a+i;
    }
  return point;
}
