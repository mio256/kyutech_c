#include <stdio.h>
#include <string.h>

#define MAXLINE 200

int main(void)
{
    char inbuff[MAXLINE] ;
    char outbuff[MAXLINE] ;
    int i, j, size ;

    while (fgets(inbuff, MAXLINE, stdin) != NULL) {
	size = strlen(inbuff) ;
/*
	for (size = 0; inbuff[size] !='\0'; size++)
	    ;
*/
	for (i = 0, j = size - 1; i < size ; i++, j--)
	    outbuff[i] = inbuff[j] ;
	outbuff[i] = '\0' ;

	printf("%s\n", outbuff) ;
    }

    return 0 ;
}

