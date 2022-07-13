#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void){
    // random
    int random_available[N];
    // table
    int table[5][5];
    int table_done[N];
    int table_done_flag;
    // bing
    int bingo_flag;
    int bingo_cnt;
    // for
    int i,j,k;
    // tmp
    int tmp;

    // reset
    for(i=0;i<N;i++){
        random_available[i]=1;
        table_done[i]=0;
    }

    // create table by random
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            tmp=rand()%15 + 1;
            tmp+=15*i;
            while(random_available[tmp]==0){
                tmp=rand()%15 + 1;
                tmp+=15*i;
            }
            table[i][j]=tmp;
            random_available[tmp]=0;
        }
    }

    // center
    table_done[0]=table[2][2];

    bingo_flag=0;
    while(bingo_flag==0){
        // print table
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                table_done_flag=0;
                for(k=0;table_done[k]!=0;k++){
                    if(table[i][j]==table_done[k]){
                        table_done_flag=1;
                    }
                }
                if(table_done_flag==1){
                    // done
                    printf("  --");
                }else{
                    // not done
                    printf("%4d",table[i][j]);
                }
            }
            printf("\n");
        }

        // input
        printf("input=");
        scanf("%d",&tmp);
        // i input  input-1
        // 0 1-15   0-14
        // 1 16-30  15-29
        // 2 31-45  30-44
        // 3 46-60  45-59
        // 4 61-75  60-74
        i=(tmp-1)/15;
        for(j=0;j<5;j++){
            if(table[i][j]==tmp){
                printf("i=%d, j=%d\n",i,j);
                // for(k=0;table_done[k]!=0;k++);
                table_done[k]=table[i][j];
            }
        }

        // bingo j
        for(i=0;i<5;i++){
            bingo_cnt=0;
            for(j=0;j<5;j++){
                for(k=0;table_done[k]!=0;k++){
                    if(table[i][j]==table_done[k]){
                        bingo_cnt++;
                    }
                }
            }
            if(bingo_cnt==5){
                bingo_flag=1;
            }
        }
        // bingo i
        for(j=0;j<5;j++){
            bingo_cnt=0;
            for(i=0;i<5;i++){
                for(k=0;table_done[k]!=0;k++){
                    if(table[i][j]==table_done[k]){
                        bingo_cnt++;
                    }
                }
            }
            if(bingo_cnt==5){
                bingo_flag=1;
            }
        }
        // bingo cross
        for(i=0,j=0;i<5;i++,j++){
            bingo_cnt=0;
            for(k=0;table_done[k]!=0;k++){
                if(table[i][j]==table_done[k]){
                    bingo_cnt++;
                }
            }
            if(bingo_cnt==5){
                bingo_flag=1;
            }
        }
        for(i=0,j=4;i<5;i++,j--){
            bingo_cnt=0;
            for(k=0;table_done[k]!=0;k++){
                if(table[i][j]==table_done[k]){
                    bingo_cnt++;
                }
            }
            if(bingo_cnt==5){
                bingo_flag=1;
            }
        }
    }
    printf("BINGO\n");

    return 0;
}
