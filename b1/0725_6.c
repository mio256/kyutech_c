#include <stdio.h>

#define STRSIZE 8

int main(void){
    char s1[STRSIZE];
    char s2[]="12Abc";
    int i;

    printf("s1=");
    gets(s1);
    printf("s1=:%s:\n",s1);
    printf("s2=:%s:\n",s2);
    for(i=0;i<STRSIZE;i++){
        printf("s1[%1d]=%c,%d\n",i,s1[i],s1[i]);
    }
    for(i=0;s2[i]!='\0';i++){
        printf("s2[%1d]=%c,%d\n",i,s2[i],s2[i]);
    }

    return 0;
}