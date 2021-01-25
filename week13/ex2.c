#include<stdio.h>
#include<string.h>
void replace(char text[100],char a,char b){
    int i=0;
    while(text[i]!='\0'){
        if(text[i]==a)
            text[i]=b;
        i++;
    }
}
int main() {
    char text[100],a,b;
    gets(text);
    scanf(" %c %c",&a,&b);
    replace(text,a,b);
    printf("%s",text);
    return 0;
}
