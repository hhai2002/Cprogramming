#include<stdio.h>
#include<string.h>

int main() {
    char text[5][100]={"TV127 31 inch Television","CD057 CD Player","TA877 Answering Machine","CS409 Car Stereo","PC655 Personal Computer"};
    char input[100], *pro_num=NULL;
    scanf("%s",input);
    int i;
    for(i=0;i<5;i++){
        pro_num=strstr(text[i],input);
        if(pro_num!=NULL)
            break;
    }
    if(pro_num==NULL)
        printf("NOT FOUND");
    else
        printf("%s",pro_num);
    return 0;
}
