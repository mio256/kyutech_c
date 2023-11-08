#include <stdio.h>
#include <string.h>

#define MAT_SIZE 6

int levenshtein(char s1[], char s2[], int s1_len, int s2_len)
{
    int i, j, r, mat[MAT_SIZE][MAT_SIZE];
    for (i = 0; i < s1_len + 1; i++)
    {
        mat[i][0] = i * 2; // ク 6
    }

    for (i = 0; i < s2_len + 1; i++)
    {
        mat[0][i] = i * 2; // ケ 6
    }

    for (i = 0; i < s1_len; i++)
    {
        for (j = 0; j < s2_len; j++)
        {
            if (s1[i] == s2[j])
            {
                r = 0;
            }
            else
            {
                r = 3; // コ 4
            }
            if (mat[i][j] + r < mat[i][j + 1] + 2 && mat[i][j] + r < mat[i + 1][j] + 2)
            {
                mat[i + 1][j + 1] = mat[i][j] + r; // サ 20
            }
            else if (mat[i][j + 1] + 2 < mat[i + 1][j] + 2)
            {
                mat[i + 1][j + 1] = mat[i][j + 1] + 2; // シ 23
            }
            else
            {
                mat[i + 1][j + 1] = mat[i + 1][j] + 2; // ス 27
            }
            // debug
        }
    }

    // print mat
    printf("    ");
    for (i = 0; i < s1_len + 1; i++)
    {
        printf("  %c", s2[i]);
    }
    printf("\n");
    for (i = 0; i < s1_len + 1; i++)
    {
        if (i > 0)
        {
            printf("%c ", s1[i - 1]);
        }
        else
        {
            printf("  ");
        }
        for (j = 0; j < s2_len + 1; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    i--;
    j--;

    return mat[i][j]; // セ 17
}

int main(void)
{
    int s1_len, s2_len;
    char s1[100], s2[100];

    strcpy(s1, "ABDCA");
    strcpy(s2, "ACBDC");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (levenshtein(s1, s2, s1_len, s2_len) != 4)
    {
        printf("Error: levenshtein(s1, s2, s1_len, s2_len) != 4\n");
        return 1;
    }

    strcpy(s1, "ABDC");
    strcpy(s2, "AABD");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (levenshtein(s1, s2, s1_len, s2_len) != 4)
    {
        printf("Error: levenshtein(s1, s2, s1_len, s2_len) != 4\n");
        return 1;
    }

    strcpy(s1, "AAAAA");
    strcpy(s2, "BBBBB");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (levenshtein(s1, s2, s1_len, s2_len) != 15)
    {
        printf("Error: levenshtein(s1, s2, s1_len, s2_len) != 15\n");
        return 1;
    }

    strcpy(s1, "ABCD");
    strcpy(s2, "ADBC");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (levenshtein(s1, s2, s1_len, s2_len) != 4)
    {
        printf("Error: levenshtein(s1, s2, s1_len, s2_len) != 4\n");
        return 1;
    }

    strcpy(s1, "ABCDE");
    strcpy(s2, "ACDFB");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (levenshtein(s1, s2, s1_len, s2_len) != 7)
    {
        printf("Error: levenshtein(s1, s2, s1_len, s2_len) != 7\n");
        return 1;
    }

    strcpy(s1, "ABCDE");
    strcpy(s2, "CEADB");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (levenshtein(s1, s2, s1_len, s2_len) != 11)
    {
        printf("Error: levenshtein(s1, s2, s1_len, s2_len) != 11\n");
        return 1;
    }

    return 0;
}
