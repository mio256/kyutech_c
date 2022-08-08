#include <stdio.h>

#define STRSIZE 31

int strlength(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i; 
}

int main(void){
    char s1[STRSIZE];
    int i;

    printf("s1=");
    gets(s1);
    printf("s1=:%s:\n",s1);
    printf("%d\n",strlength(s1));

    return 0;
}