#include <stdio.h>

#define STRSIZE 31

int main(void){
    char s1[STRSIZE];
    int i;

    printf("s1=");
    gets(s1);
    printf("s1=:%s:\n",s1);
    for(i=0;s1[i]!='\0';i++);
    printf("%d\n",i);

    return 0;
}