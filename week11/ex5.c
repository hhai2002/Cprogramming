#include<stdio.h>
void print(int x, int y, int z, int *p, int *q, int *r){
    printf("x \t %d\n",x);
    printf("y \t %d\n",y);
    printf("z \t %d\n",z);
    printf("p \t %p\n",p);
    printf("q \t %p\n",q);
    printf("r \t %p\n",r);
    printf("*p \t %d\n",*p);
    printf("*q \t %d\n",*q);
    printf("*r \t %d\n",*r);
}
void swap1(int *p, int *q, int *r){
    int tmp=*p;
    *p=*q;
    *q=*r;
    *r=tmp;
}
int main() {
    int x,y,z;
    printf("Enter three integers: ");
    scanf("%d%d%d",&x,&y,&z);
    printf("Three entered values x, y, z, has corresponding pointers p, q, r.\n");
    print(x,y,z,&x,&y,&z);
    printf("Let's swap the values!\n");
    swap1(&x,&y,&z);
    print(x,y,z,&x,&y,&z);
    return 0;
}
// Question 3 not completed!