/*---------------------------------------------------------------------------------------- 
136

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
    char str[256] = {'a', 'k', 'i', 'h', 'i', 'r', 'o', '\n'};
    printf("文字を入力して下さい→ ");
    fgets(str, 256, stdin);
    // printf("str = %s\n", str);
    howmany_str(str);
}

void howmany_str(char *str)
{
    int i, str_count = 0;
    while(*str != '\n'){
        str_count++;
        str += i;
        // printf("str_count = %d\n", str_count);
    }
    printf("文字数: %d\n", str_count);
}




/*---------------------------------------------------------------------------- 
//他人の解答
#include <stdio.h>

int how_many_words(char *str, int leng_str);

int main(){
	char str[128];
	int sum_words=0;
	
	printf("文字列中の語数を数えます．適当な文を入力してください\n");

	fgets(str, sizeof(str), stdin);

	sum_words = how_many_words(str, sizeof(str));

	printf("文中に含まれる語数は %d 個です\n", sum_words);

	return(0);
}


//  * 与えられた文字列に含まれる語数を数える関数
//  * 引数 str 文字列  leng_str 文字列の要素数
 
int how_many_words(char *str, int leng_str){
	int sum_words=0, i;

	for(i=0; i<leng_str; i++)
		sum_words += (str[i]==' ')? 1 : 0 ; // スペースがあるたびに+1

	return(sum_words+1);                    // 最後の語を数える為に+1した値を返す
}


 ----------------------------------------------------------------------------------------*/




