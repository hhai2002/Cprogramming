#include<stdio.h>
#include<string.h>

int countblanks(char text[100]){
    int i=0,count=0;
    while(text[i]!='\0'){
        if(text[i]==' '){
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char text[100];
    gets(text);
    printf("%d",countblanks(text));
    return 0;
}
