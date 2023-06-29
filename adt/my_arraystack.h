#define MAX_SIZE 100

typedef struct stack
{
    int data[MAX_SIZE];
    int index;
} STACK;

STACK *newStack(void);
void push(STACK *sp, int v);
int pop(STACK *sp);
int len(STACK *sp);
int isEmpty(STACK *sp);
int isFull(STACK *sp);
