/*---------------------------------------------------------------------------------------- 
9章 変数スコープおよび関数
9.7 プログラミング実習
実習9-1 文字列中の
「語」数を数える関数を作成してください(ドキュメンテーション中の「語」 の定義を正確に記述しておかなければなりません)。この関数をテストするプログラムを 記述してください。
--------------------------------------------------------------------------------------------- */

//自分の解答
#include<stdio.h>

void howmany_str(char *);

void main(void)
{
    char str[256];
    printf("文字を入力して下さい→ ");
    fgets(str, sizeof(str), stdin);
    // printf("str = %s\n", str);
    howmany_str(str);
}

void howmany_str(char *str)
{
    int str_count = 0;
    while(*str != '\n'){
        str_count++;
        str++;
        // printf("str_count = %d\n", str_count);
    }
    printf("文字数: %d\n", str_count);
}



/*--------------------------------------------------- 
result:

文字を入力して下さい→ akihiro
文字数: 7

文字を入力して下さい→ tarou
文字数: 5
------------------------------------------------------- */
