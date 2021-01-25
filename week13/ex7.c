#include<stdio.h>
#include<string.h>

int main() {
    char text[100];
    gets(text);
    int i;
    for(i=0;i<strlen(text);i++){
        if(text[i]==','||text[i]=='.'||text[i]==':'||text[i]==';'||text[i]=='!'||text[i]=='?')
            text[i]=' ';
    }
    printf("%s",text);
    return 0;
}
