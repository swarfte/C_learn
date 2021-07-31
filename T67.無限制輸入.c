#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);

int main () {
    int *find = 0;//空指標
    int Numlong = 0;//長度
    for (int run = 0 ; run != 1 ;){
        int writing = iN();
        if (writing == 0){
            run = 1;
        }
        find = realloc (find , sizeof (int) * (Numlong +1));
            *(find + Numlong) = writing;//存入新的數字
            Numlong++;//增加長度
        }
    for (int run = 0 ;run < Numlong ; run++){/*印出數字*/
        printf ("%d ",find [run]);
    }
    printf ("\n");
    printf ("一共有%d 個數字",Numlong);
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

double dN (void){
    double choose;
    scanf ("%d",&choose);
    return choose;
}

