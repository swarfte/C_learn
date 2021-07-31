#include <stdio.h>

int main () {
    printf ("請輸入消費人數\n");
    int people;
    scanf ("%d",&people);
    int money;
    money = 300 * people;
    if (money >= 3000) {
        money = money *0.8;
    }
    printf ("總人數為%d\n",people);
    printf ("總額為%d\n",money);
    return 0;
}
