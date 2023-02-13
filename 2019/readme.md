# 2019年2月20日 データ構造とアルゴリズム 期末試験 問題・解答

問題内の誤字・脱字と思われる箇所を修正しています。

## 1. 探索

```c

~ A ~
{
    int left = 0, right = n-1, mid;
    
    while( left <= right ){
        mid = (left+right)/2;
        if( data[mid] == key ){
            ~ B ~
        } else if ( data[mid] < key ){
            ~ C ~
        } else {
            ~ D ~
        }
    }
    return -1;
}

int main(void)
{
    double data[10] = { 0.2, 1.5, 3.1, 5.4, 7.0, 9.8, 12.3, 15.4, 19.0, 24.6};
    double x;
    int found;

    scanf("%f", &x); //%lfにすべき
    found = search(x, data, 10);
    if( found >= 0){
        printf("Found %f at data[%d]\n", x, found); //%lfにすべき
    } else {
        printf("Not found %d\n", x); //%lfにすべき
    }

    return 0;
}

```

### (1) 空欄Aに入る関数searchの定義として適切なものを選択せよ。

1. `int search(int key, int data[], int n)`
2. `int search(double key, int data[], int n)`
3. `int search(int key, double data[], int n)`
4. `int search(double key, double data[], int n)`
5. `double search(double key, double data[], int n)`
6. `double search(double key, double data[], double n)`

**ans. 4 - `int search(double key, double data[], int n)`**

> 解説  
> main関数を見ると`found = search(x, data, 10);`の行でsearch関数が使われています。  
> ここから逆算して考えると、  
>  - foundはint型で定義されている→search関数の返り値はint型である
>  - xはdouble型→search関数の第一引数（key）はdouble型
>  - main関数内のdataはdouble型→search関数の第二引数（data）はdouble型
>  - `10`はint型→search関数の第三引数（n）はint型
> 
> ちなみに、C言語内で数字や文字をそのまま書く（リテラル）は以下のような扱いになります。
> `10`→int型  
> `10.0`→double型（floatよりdoubleが優先されます）  
> `'1'`→char型（文字）  
> `"1"`→char*型（文字列）

### (2) 空欄B,C,Dに入るプログラムとして適切なものを選択せよ。

1. `left = mid;`
2. `left = mid - 1;`
3. `left = mid + 1;`
4. `right = mid;`
5. `right = mid - 1;`
6. `right = mid + 1;`
7. `left = right;`
8. `return left;`
9. `return right;`
10. `return mid;`（10番→0番）

**ans. B-0 `return mid;`**  
**C-3 `left = mid + 1;`**  
**D-5 `right = mid - 1;`**

> 解説  
> 二分探索法です。

## 2. ソート

```c

#include <stdio.h>
#define N 5

/* a */

int comp_SDATA(struct SDATA s1, struct SDATA s2)
{
    /* b */
}

void isort(struct SDATA S[], int n)
{
    int i, j, r;
    struct SDATA ins;

    for (i = 1; i < n; i++)
    {
        ins = S[i];
        r = comp_SDATA(/* c */);
        if (r < 0)
        {
            j = i;
            while (/* d */)
            {
                S[j] = S[j - 1];
                j--;
                r = comp_SDATA(/* e */);
            }
            S[j] = ins;
        }
    }
}

int main(void)
{
    int i;

    struct SDATA D[N] = {
        {1001, 90, 85, 70},
        {1002, 65, 80, 70},
        {1003, 80, 85, 75},
        {1004, 100, 70, 80},
        {1005, 80, 90, 65}};

    isort(D, N);
    for (i = 0; i < N; i++)
    {
        printf("ID:%d Total:%d\n", D[i].id, D[i].eng + D[i].math + D[i].prog);
    }
    return 0;
}
```

以下のプログラムは、 入力データを成績の合計点の降順に並べ換えるプログラムである。  
入力データは以下の4つのメンバを持つ構造体 SDATA の配列に格納される。  
1. 整数型の学生番号を保存するメンバ id
2. 整数型の英語の成績を保存するメンバ eng
3. 整数型の数学の成績を保存するメンバ math
4. 整数型のプログラミングの成績を保存するメンバ prog

プログラムの空欄 (a)~(e)は、以下のような内容とする。  
(a) 構造体 SDATA の定義  
(b) 関数 comp_SDATA は、 引数として与えられる構造体 SDATA の変数 s1とs2に含まれる3つの成績の合計の大小を比較する関数である。  
s1とs2の3つの成績(英語、数学、プログラミング)の合計をそれぞれsum1, sum2とするとき、 返り値は以下のようになる。  

    sum1<sum2ならば、 返り値は-1
    sum1=sum2ならば、 返り値は 0
    sum1>sum2ならば、 帰り値は 1

(c), (d), (e) 関数 isort は、 挿入ソートのアルゴリズムを使って、引数の構造体 SDATAの配列のデータを3つの成績の合計の降順に並べ換える関数である。  

### (1) 空欄 (a) を埋めよ。
```c
struct SDATA
{
    int id;
    int eng;
    int math;
    int prog;
};
```
### (2) 空欄 (b) を埋めよ。
```c
    int sum1, sum2;
    sum1 = s1.eng + s1.math + s1.prog;
    sum2 = s2.eng + s2.math + s2.prog;
    if (sum1 < sum2)
    {
        return -1;
    }
    else if (sum1 == sum2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
```
(3) 空欄 (c)~(e) を埋めよ。
```c
(c) S[i - 1], ins
(d) j > 0 && r < 0
(e) S[j], ins
```

> 解説  
> (a) 問題文の通りに構造体を宣言します。  
> (b) 問題文の通りに関数を定義します、if文は条件式なので`==`を使うことを忘れないでください。  
> (c)~(e) 挿入ソートを実装します。moodleであれば試行しながら行えますが、手書きだと厳しいです。しっかりトレースをして確認してください。

