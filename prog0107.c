/* prog0107.c */

#include <stdio.h>

#define  N  10

int main(void)
{
    int data[N];
    int i;
    int count = 0;
    float avg = 0.0;
    
    int sum=0;

    for( i=0; i<N; i++ )
        scanf( "%d", &data[i] );

    /*  平均値よりも値が小さいものの個数を求めて表示する  */

    for( i=0; i<N; i++ ){
        sum+=data[i];
    }

    avg=sum/(float)N;


    printf( "%f\n", avg );

    for( i=0; i<N; i++ ){
        if(data[i]<avg){
            count++;
        }
    }

    printf( "%d\n", count );

    return 0;
}
