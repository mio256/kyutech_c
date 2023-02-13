#include <stdio.h>
#include <stdlib.h>

struct LIST{
    int data;
    struct LIST *next;
};

int main(void){
    struct LIST *top;

    top=(struct LIST *)malloc(sizeof(struct LIST));
    top->data=1;
    top->next=(struct LIST *)malloc(sizeof(struct LIST));
    top->next->data=3;
    top->next->next=NULL;

    return 0;
}