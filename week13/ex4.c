#include<stdio.h>
#include<string.h>
void cut(char text[]){
    int i=0;
    while(text[i]!=' '&&text[i]!='\0'){
        i++;
    }
    if(text[i]==' ')
        text[i]='\0';
}
int main() {
    char text[100];
    gets(text);
    int i=0;
    cut(text);
    printf("%s",text);
    return 0;
}
