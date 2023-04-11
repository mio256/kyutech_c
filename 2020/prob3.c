#include <stdio.h>
#define H_SIZE 15
#define N 10

struct SDATA
{
    int id;
    int prog;
    int daa;
};

struct SDATA D[N] = {
    {1514, 83, 75},
    {1541, 62, 90},
    {1589, 97, 78},
    {1552, 78, 84},
    {1558, 54, 67},
    {1582, 89, 86},
    {1534, 78, 60},
    {1512, 78, 58},
    {1511, 88, 69},
    {1539, 98, 91}};

int h_table[H_SIZE];

int hash(int key)
{
    return key % H_SIZE;
}

void add_T_hash(int key, int no)
{
    int h;

    h = hash(key);
    while (h_table[h] != -1)
    {
        h = (h + 1) % H_SIZE;
    }
    h_table[h] = no;
}

void make_T_hash_table(void)
{
    int i;

    for (i = 0; i < H_SIZE; i++)
    {
        h_table[i] = -1;
    }

    for (i = 0; i < N; i++)
    {
        add_T_hash(D[i].id, i);
    }
}

int search_hash_data(int key)
{
    int h;

    h = hash(key);
    printf("h=%d\n",h);
    while (h_table[h] != -1)
    {
        printf("h_table[h]=%d\n",h_table[h]);
        if (D[h_table[h]].id == key)
        {
            return h_table[h];
        }
        h = (h + 1) % H_SIZE;
    }
    return -1;
}

void print_data(int x)
{
    int id, prog, daa;
    double avg;

    printf("x=%d\n",x);

    if (x == -1)
    {
        printf("not found\n");
    }
    else
    {
        id = D[x].id;
        prog = D[x].prog;
        daa = D[x].daa;
        avg = (prog+daa)/2.0;
        printf("ID: %d PROG: %d DAA: %d AVG: %.2f\n", id, prog, daa, avg);
    }
}

int main(void)
{
    int index, sid;

    make_T_hash_table();

    int i;
    for(i=0;i<H_SIZE;i++){
        printf("h_table[%d]=%d\n",i,h_table[i]);
    }

    printf("id>");
    scanf("%d", &sid);

    index = search_hash_data(sid);

    print_data(index);
}