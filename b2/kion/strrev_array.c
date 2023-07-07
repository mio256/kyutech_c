#include <stdio.h>

#define MAXLINE 200

int main(void)
{
    char buff[MAXLINE] ;
    int i, size ;

    while (fgets(buff, MAXLINE, stdin) != NULL) {
	/* size = strlen(buff) */
	for (size = 0; buff[size] !='\0'; size++)
	    ;

	for (i = size - 1; i >= 0; i--)
	    printf("%c", buff[i]) ;
	printf("\n") ;
    }

    return 0 ;
}

