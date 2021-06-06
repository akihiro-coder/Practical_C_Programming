/* ポインタを使用して、配列の各要素を０に設定するプログラム作成 */

#include<stdio.h>


/* 
int main()
{
    int cnt, i;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    
    for(cnt = 0; cnt < 10; cnt++){
        p = array + cnt;        //array + cnt : アドレス値を(4byte * cnt)だけ加算
        *p = 0;
        printf("array[%d] = %d\n", cnt, array[cnt]);
    }
}

*/

/* 
array[0] = 0
array[1] = 0
array[2] = 0
array[3] = 0
array[4] = 0
array[5] = 0
array[6] = 0
array[7] = 0
array[8] = 0
array[9] = 0

 */






/*
int main()
{
    int i;
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    
    for(i = 0; i < 10; i++){
        printf("array[%d] = %d, ", i, array[i]);
    }
    printf("\n"); 
    for(i = 0; i < 10; i++){
        p = array + i;
        *p = 0;
        printf("array[%d] = %d, ", i, array[i]);
    }
    printf("\n"); 
}
*/

/* 
   array[0] = 1, array[1] = 2, array[2] = 3, array[3] = 4, array[4] = 5, array[5] = 6, array[6] = 7, array[7] = 8, array[8] = 9, array[9] = 10,
   array[0] = 0, array[1] = 0, array[2] = 0, array[3] = 0, array[4] = 0, array[5] = 0, array[6] = 0, array[7] = 0, array[8] = 0, array[9] = 0,
   
*/
    
    
    
    
