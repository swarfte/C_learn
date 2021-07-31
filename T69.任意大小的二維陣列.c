#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);
void printnumber (int* , int , int );

int main () {
    for (int exit = 0 ; exit != 1 ;){
        srand(time(0));
        printf ("輸入長度和寬度\n");
        int Nlong = iN();
        int Nwidth = iN();
        int numlong [Nlong] , numwidth [Nwidth];
        for (int run = 0 ; run < Nlong ;run++){//存入長度
            *(numlong + run) = rand() % ( Nlong * Nlong);
        }
        for (int run = 0 ; run < Nwidth ; run++){//存入寬度
            numwidth [run] = rand() % (Nwidth * Nwidth);
        }
        int *usenumber [2] = {&numlong , &numwidth};
        printnumber (usenumber , Nlong , Nwidth);
    }
    return 0;
}

void printnumber (int *BS , int Nlong , int Nwidth){
    for (int go = 0 ; go < Nlong ; go++){
        for (int run = 0 ; run < Nwidth ; run++){
            printf ("%d ",*(BS + go * Nwidth + run ));
        }
        printf ("\n");
    }
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

double dN (void){
    double choose;
    scanf ("%d",&choose);
    return choose;
}

