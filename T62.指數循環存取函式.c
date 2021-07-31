#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int intn (void);
char charn (void);
double doublen (void);

int main () {
    srand (time(0));
    printf ("?位數字\n");
    int choose = intn();
    int number [choose];
    for (int run = 0 ; run < choose ; run++){
        number [run] = rand() % (choose + run);
    }
    int *Number;
    for (Number = number ; Number < number + choose ; Number++){
        printf ("%d  ",*Number);
    }
    return 0;
}

int intn (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}

char charn (void){
    char choose;
    scanf ("%c",&choose);
    return choose;
}

double doublen (void){
    double choose;
    scanf ("%d",&choose);
    return choose;
}

