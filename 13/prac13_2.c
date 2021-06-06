/*----------------------------------------------------------------------
13.10 プログラミング実習/実習13-2
問題：
引数として文字列を一つ取り、
その文字列中のスペース文字でない最初の文字へのポインタを返す関数


13.10 Programming practice / practice 13-2
Question:
A function that takes a string as an argument 　
and returns a pointer to the first non-space character in the string
------------------------------------------------------------------------ */

#include<stdio.h>
char *explorer_str(char *);

void main()
{
    char str[256] = "      konnichiwa";
    printf("a pointer to the first non-space character is %p.\n", explorer_str(str));
    //printf("the first non-space character is '%c'.\n", *explorer_str(str));

}


char *explorer_str(char *str)
{
    while(*str == ' '){
        str++;
    }
    return(str);
}
