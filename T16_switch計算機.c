#include <stdio.h>

int main () {
    printf ("輸入運算式子\n");
    double X,Y;
    char go;
    scanf ("%lf%c%lf",&X,&go,&Y);
    switch (go) {
        //多種情況選一種
        case '+' :
        //情況 字元 :
        X = X + Y;
        break;
        //結束,下一種情況
        case '-' :
        X = X - Y;
        break;
        case '*' :
        X = X * Y;
        break;
        case '/' :
        X = X / Y;
        break ;
        //當沒有情況(默認時)用default表示
    }
    printf ("答案為%lf",X);
    return 0;
}
