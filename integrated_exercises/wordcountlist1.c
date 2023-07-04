#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "wordcount.h"

typedef struct wordcountlist
{
	struct wordcountlist *next;
	WORDCOUNT info;
} WORDCOUNTLIST;

WORDCOUNTLIST *root;
WORDCOUNTLIST *WCLCurrent;

/* 初期化 */
void wordcountInit(void)
{
	root = (WORDCOUNTLIST *)malloc(sizeof(WORDCOUNTLIST));
	root->next = NULL;
	WCLCurrent = root;
}

/* 単語の検索 */
WORDCOUNT *wordcountSearch(char *word)
{
	WORDCOUNTLIST *wcl;

	wcl = root;

	while (wcl->next != NULL)
	{
		/* 単語が既に記録されていたらそのアドレスを返す */
		if (strcmp(word, wcl->next->info.word) == 0)
			return &(wcl->next->info);

		wcl = wcl->next;
	}

	return NULL;
}

/* 単語の登録 */
void wordcountRegister(char *word)
{
	WORDCOUNT *id;
	WORDCOUNTLIST *wcl;

	if ((id = wordcountSearch(word)) != NULL)
	{
		/* 単語が見つかったら出現回数を更新 */
		id->count++;
	}
	else
	{
		wcl = (WORDCOUNTLIST *)malloc(sizeof(WORDCOUNTLIST));
		strcpy(wcl->info.word, word);
		wcl->info.count = 1;
		wcl->next = root->next;
		root->next = wcl;
	}
}

/* 最初の単語のデータを取得 */
WORDCOUNT *wordcountGetFirst(void)
{
	WORDCOUNT *wcp;
	WCLCurrent = root;

	if (WCLCurrent->next != NULL)
	{
		WCLCurrent = WCLCurrent->next;
		wcp = &(WCLCurrent->info);
		return wcp;
	}
	else
	{
		return NULL;
	}
}

/* 次の単語のデータを取得 */
WORDCOUNT *wordcountGetNext(void)
{
	WORDCOUNT *wcp;
	if (WCLCurrent->next != NULL)
	{
		WCLCurrent = WCLCurrent->next;
		wcp = &(WCLCurrent->info);
		return wcp;
	}
	else
		return NULL;
}

/* WORDCOUNTから単語を取得 */
char *wcGetWord(WORDCOUNT *wcp)
{
	return wcp->word;
}

/* WORDCOUNTから単語の出現回数を取得 */
int wcGetCount(WORDCOUNT *wcp)
{
	return wcp->count;
}
