# 概要

抽象データ型を用いて単語の出現回数を管理する

連結リストにより実装

# 関数一覧

- wordcountInit
- wordcountSearch
- wordcountRegister
- wordcountGetFirst
- wordcountGetNext
- wcGetWord
- wcGetCount

# 関数の説明

wordcountInit - 初期化

wordcountSearch - 単語検索

wordcountRegister - 単語登録

wordcountGetFirst - 最初の単語を取得

wordcountGetNext - 次の単語を取得

wcGetWord - 単語を取得

wcGetCount - 出現回数を取得

# 関数の利用法

## wordcountInit
```c
void wordcountInit(void)
```
初期化時に呼び出す

# wordcountSearch
```c
WORDCOUNT *wordcountSearch(char *word)
```
文字列から単語検索を行い、WORDCOUNTを返す

# wordcountRegister
```c
void wordcountRegister(char *word)
```
文字列から単語登録を行い、新規生成か出現回数加算を行う

# wordcountGetFirst
```c
WORDCOUNT *wordcountGetFirst(void)
```
最初の単語を取得し、WORDCOUNTを返す

# wordcountGetNext
```c
WORDCOUNT *wordcountGetNext(void)
```
次の単語を取得し、WORDCOUNTを返す

# wcGetWord
```c
char *wcGetWord(WORDCOUNT *wcp)
```
単語から文字列を返す

# wcGetCount
```c
int wcGetCount(WORDCOUNT *wcp)
```
単語から出現回数を返す

# 注意
wordcount.hをインクルードすること
```c
#include "wordcount.h"
```
