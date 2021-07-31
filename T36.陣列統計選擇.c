#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    printf ("輸入測試次數\n");
    int runin;
    scanf ("%d",&runin);
    srand (time(0));
    int choose[4] = {0};
    int randum;
    for (int run = 1 ; run <= runin ; run++ ) {
            randum = (rand()) % 4 + 1;
        switch (randum) {
        case 1 : choose[0]++ ; break;
        case 2 : choose[1]++ ; break;
        case 3 : choose[2]++ ; break;
        case 4 : choose[3]++ ; break;
        }
    }
    printf ("統計結果\n");
    printf ("A : %d\n",choose[0]);
    printf ("B : %d\n",choose[1]);
    printf ("C : %d\n",choose[2]);
    printf ("D : %d\n",choose[3]);
    return 0;
    system ("pause");
}
