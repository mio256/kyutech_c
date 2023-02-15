#include <stdio.h>
#include <stdlib.h>

struct DATA{
    int height;
    int weight;
};

int main(void){
    struct DATA data;
    struct DATA *p_data;

    data.height=190;
    data.weight=65;

    printf("data.height=%d\n",data.height);
    printf("data.weight=%d\n",data.weight);

    p_data=&data;

    printf("p_data.height=%d\n",p_data->height);
    printf("p_data.weight=%d\n",p_data->weight);

    return 0;
}