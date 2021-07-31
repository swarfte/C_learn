#include<stdio.h>

int main(){
    int no1,no2,sum;
 //建立3個存取空間
        printf ("請輸入第一個數字:");
    scanf ("%d",&no1);
//由鍵盤讀取. %d指十進位整數 &指取址運算子(輸入建立的空間)
    printf ("請輸入第二個數字:");
    scanf ("%d",&no2);
        sum = no1 + no2;
//=指把右邊的運算結果放入左邊,+指把兩數代數相加
    printf ("答案為%d.\n", sum);
    return 0;
}
