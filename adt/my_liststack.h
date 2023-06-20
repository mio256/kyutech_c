typedef struct node
{
    struct node *next;
    int value;
} NODE;

typedef struct stack
{
    NODE *root;
    int size;
} STACK;

STACK *new(void);
void push(STACK *sp, int v);
int pop(STACK *sp);
int len(STACK *sp);
int isEmpty(STACK *sp);
int isFull(STACK *sp);
