#include <stdio.h>

int main () {
    printf (" 輸入所需的編號\n") ;
    printf ("1號17,2號29,3號31,4號43,5號53\n") ;
    int num ;
    int money = 0 ;
    do {
          scanf ("%d",&num) ;
          switch (num) {
        case 1 :
        money += 17 ;
        break ;
        case 2 :
        money += 29 ;
        break ;
        case 3 :
        money += 31 ;
        break ;
        case 4 :
        money += 43 ;
        break ;
        case 5 :
        money += 53 ;
        break ;
          }
    } while (num != 0);
    printf ("總金額為%d\n",money);
    return 0;
}
