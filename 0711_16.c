#include <stdio.h>

int main(void){
    int a,*pa;
    double b,*pb;

    printf("sizeof a         =%lu\n",sizeof a);
    printf("sizeof (int)     =%lu\n",sizeof (int));
    printf("sizeof pa        =%lu\n",sizeof pa);
    printf("sizeof (int *)   =%lu\n",sizeof (int *));
    printf("sizeof b         =%lu\n",sizeof b);
    printf("sizeof (double)  =%lu\n",sizeof (double));
    printf("sizeof pb        =%lu\n",sizeof pb);
    printf("sizeof (double *)=%lu\n",sizeof (double *));

    return 0;
}
