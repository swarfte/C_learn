#include <stdio.h>
int main () {
    printf ("當前編譯器各種資料型別的大小\n");
    //sizeof 代表求出()內的大小
    //資料型別除字元外都為實作定義
    printf ("short int: %d \n", sizeof (short int));
    //短整數
    printf ("int: %d \n", sizeof (int));
    //有號整數
    printf ("unsigned int: %d \n", sizeof (unsigned int));
    //無號整數
    printf ("long int: %d \n", sizeof (long int));
    //長整數
    printf ("long long int: %d \n", sizeof (long long int));
    //長長整數
    printf ("char: %d \n", sizeof (char));
    //字元,英文
    printf ("wchar_t: %d \n", sizeof (wchar_t));
    //寬字元,中文
    printf ("float: %d \n", sizeof (float));
    //單浮點數,誤差大
    printf ("double: %d \n", sizeof (double));
    //倍浮點數,誤差小
    printf ("long double: %d \n", sizeof (long double));
    //長倍浮點數
    printf ("_Bool: %d \n", sizeof (_Bool));
    //判斷型別
    printf ("void: %d \n", sizeof (void));
    //無(?
    system ("pause");
    return 0;
}

