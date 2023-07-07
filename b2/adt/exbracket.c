#include <stdio.h>

#define MAXLINE 200

/* 文字列中の文字の位置を取得 */
int findchar(char str[], int c);

int main(void)
{
	char buff[MAXLINE];
	char bopen[] = "<{([";
	char bclose[] = ">})]";
	int i, bidx;

	while (fgets(buff, MAXLINE, stdin) != NULL)
	{
		for (i = 0; buff[i] != '\0'; i++)
		{
			if ((bidx = findchar(bopen, buff[i])) != -1)
			{
				/* 開き括弧は閉じ括弧に */
				buff[i] = bclose[bidx];
			}
			else if ((bidx = findchar(bclose, buff[i])) != -1)
			{
				/* 閉じ括弧は開き括弧に */
				buff[i] = bopen[bidx];
			}
			/* 括弧以外の文字は処理しない */
		}
		printf("%s", buff);
	}

	return 0;
}

int findchar(char str[], int c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
			return i; /* 見つけた文字の添字を返す */
	}

	return -1;
}
