#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    printf ("輸入兩粒骰子投擲次數\n");
    int RunTime;
    int Number [11] = {0};
    scanf ("%d",&RunTime);
    srand (time (0));
    for (int Run = 1 ; Run <= RunTime ; Run++) {
    int Randum1 = rand () % 6 + 1;
    int Randum2 = rand () % 6 + 1;
    int Max = Randum1 + Randum2;
    Number [Max - 2]++;
    }
    for (int Write = 0 ; Write <= 10 ; Write++) {
        printf ("%d點出現次數 : %d\n",Write + 2 ,Number [Write]);
    }
    return 0;
}
