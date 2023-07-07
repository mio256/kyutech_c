#include <stdio.h>
#include <string.h>

// STUDENTという名前の構造体を定義
typedef struct student
{
    int number;
    char name[16];
} STUDENT;

int main(void)
{
    // 構造体STUDENTの配列dataを定義
    STUDENT data[3];

    // 配列の最初の要素に値を設定
    data[0].number = 100;
    strcpy(data[0].name, "ayaka");

    // 最初の要素のアドレスを出力
    printf("&data[0]=%p\n", &data[0]);

    // 最初の要素の各フィールドの値を出力
    printf("data[0].number=%d\n", data[0].number);
    printf("data[0].name=%s\n", data[0].name);

    // 構造体STUDENTへのポインタp_dataを定義し、最初の要素のアドレスを設定
    STUDENT *p_data;
    p_data = &data[0];

    // p_dataの中身（最初の要素のアドレス）とアドレスを出力
    printf("p_data=%p\n", p_data);
    printf("&p_data=%p\n", &p_data);

    // p_dataが指す要素の各フィールドの値を出力
    printf("(*p_data).number=%d\n", (*p_data).number);
    printf("(*p_data).name=%s\n", (*p_data).name);
    printf("p_data->number=%d\n", p_data->number);
    printf("p_data->name=%s\n", p_data->name);

    // 正常終了のため、0を返す
    return 0;
}
