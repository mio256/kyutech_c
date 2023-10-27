#include <stdio.h>
#include <string.h>

#define MAT_SIZE 6

int lcs(char s1[], char s2[], int s1_len, int s2_len)
{
    int i, j, k, mat[MAT_SIZE][MAT_SIZE];
    for (i = 0; i < s1_len + 1; i++)
    {
        mat[i][0] = 0;
    }

    for (i = 0; i < s2_len + 1; i++)
    {
        mat[0][i] = 0;
    }
    // ア 1
    k = 0;

    for (i = 0; i < s1_len; i++)
    {
        for (j = 0; j < s2_len; j++)
        {
            if (s1[i] == s2[j])
            {
                // イ 18
                mat[i + 1][j + 1] = mat[i][j] + 1;
                if (mat[i + 1][j + 1] > k)
                {
                    k = mat[i + 1][j + 1];
                }
            }
            else
            {
                // ウ 1
                mat[i + 1][j + 1] = 0;
            }
        }
    }

    // print mat
    for (i = 0; i < s1_len + 1; i++)
    {
        for (j = 0; j < s2_len + 1; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return k;
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
    if (lcs(s1, s2, s1_len, s2_len) != 3)
    {
        printf("Error: lcs(s1, s2, s1_len, s2_len) != 3\n");
        return 1;
    }

    strcpy(s1, "ABDCA");
    strcpy(s2, "AABDC");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (lcs(s1, s2, s1_len, s2_len) != 4)
    {
        printf("Error: lcs(s1, s2, s1_len, s2_len) != 4\n");
        return 1;
    }

    strcpy(s1, "AAAAA");
    strcpy(s2, "BBBBB");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (lcs(s1, s2, s1_len, s2_len) != 0)
    {
        printf("Error: lcs(s1, s2, s1_len, s2_len) != 0\n");
        return 1;
    }

    // 4つ目
    strcpy(s1, "ABCD");
    strcpy(s2, "ADBC");
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    printf("s1=%s, s2=%s\n", s1, s2);
    if (lcs(s1, s2, s1_len, s2_len) != 2)
    {
        printf("Error: lcs(s1, s2, s1_len, s2_len) != 2\n");
        return 1;
    }

    return 0;
}
