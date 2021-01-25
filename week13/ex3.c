#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char text[8];
    gets(text);
    int i=0;
    for(i=0;i<3;i++){
        if(isalpha(text[1])==0){
            printf("WRONG FORMAT");
            return 0;
        }
    }
    for(i=3;i<7;i++){
        if(isdigit(text[i])==0){
            printf("WRONG FORMAT");
            return 0;
        }
    }
    printf("CORRECT FORMAT");
    return 0;
}
