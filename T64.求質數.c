
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);

int main () {
    int choose = iN();
    for (int run = 2 ; run < choose  ; run++ ){//運行的次數
    int AC = 2;
        while (run % AC != 0 ){//當沒有餘數就加
            AC++;
        }
        if (run == AC ){//確實為質數
            printf ("%d ",run);
        }
    }
    return 0;
}

int iN (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}

char cN (void){
    char choose;
    scanf ("%c",&choose);
    return choose;
}

double dN(void){
    double choose;
    scanf ("%lf",&choose);
    return choose;
}

