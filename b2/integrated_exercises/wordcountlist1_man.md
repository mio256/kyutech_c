概要
この抽象データ型の名称を以後 wordcount と称します。
wordcount は、入力された文字列とその出現回数を記録し表示します。
関数一覧
wordcount で利用できる関数は以下の通りです。
• void wordcountInit(void)
• void wordcountRegister(char *word)
• void wordcountStatistics(void)
関数の説明
void wordcountInit(void) は、wordcount の機能を初期化します。wordcount の他の関数
を使用する前に、必ず呼び出す必要があります。
void wordcountRegister(char *word) は、引数で与えられた文字列とその出現回数を
wordcount 内部に記録します。
void wordcountStatistics(void) は、wordcount 内部に記録されている文字列とその出現
回数を表示します。文字列とその出現回数の表示順序は、文字列のアルファベット順や出現回数
などでソートされていません。
void wordcountStatistics(void) は、wordcount 内部に変更を加えないので、その実行後
に再度 void wordcountRegister(char *word) を繰り返し使用して単語を追加登録し、その後
に再度 void wordcountStatistics(void) を使用して、その時点での文字列とその出現回数を
表示させることもできます。
関数の利用法
• wordcount を使用するプログラムの冒頭部分に wordcount.h をインクルードします。
• 最初に void wordcountInit(void) を使用して、wordcount を初期化します。
• ファイルなどから読み出した文字列を void wordcountRegister(char *word) を使用
して、繰り返し wordcount に登録していきます。
• すべての文字列の登録が終わったら、void wordcountStatistics(void) を使用して、
単語の出現回数を表示させます。
利用上の注意
• wordcount に入力できる文字列の文字数（バイト数）は、wordcount.h に定義されている
MAXWORDSIZE から終端文字分の 1 を引いたもので、通常は 99 です。
文字の長さが上記の制限を超える可能性がある場合には、MAXWORDSIZE を使用して制
限を超える文字列を排除するか、制限を満たすように文字列の切り詰めを行ってください。
この制限を超える長さの文字列を wordcount に与えると、wordcount 内部のデータ構造が
破壊されるため、プログラムは適切な処理を行えなくなります。（クラッシュするか、動い
ているように見えても適切な結果を返さなくなります）
• wordcount に英文字（半角文字：ASCII 文字）を含む文字列を与える場合、文字列つが同
一であるかどうかを確認する際に、大文字と小文字は異なる文字として判断されます。
したがって、英文字の大小を区別せずに文字列の同一性を確認したい場合には、あらかじめ
文字列に含まれる英文字を大文字もしくは小文字に統一的に変換しておく必要があります。
• ※　連結リスト版にはこの制約はありませんが、配列版には、記録できる単語の個数に制約
があります。
