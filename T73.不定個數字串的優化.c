#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);
char cN (void);
double dN (void);

int main () {
    char saveC [1000];//空間上限
    char *strsave [100];//字串上限
    char imput [10];//每次輸入上限
    int len = 0;//總長度
    int size = 0;//總字數
    while (1) {
        scanf ("%s",imput);
        if (strcmp (imput , "END") == 0  ){//兩字串相同
            break;
        }
        strsave [len] = &saveC [size];//決定指標的起始位置
        strcpy(strsave[len] , imput);//存入字串
        size += strlen(imput) +1;//回傳字串的長度
        len++;
    }
    printf ("--------------------------------------------------\n");
    for (int run = 0 ; run < len ; run++){
        printf ("%s ", *(strsave + run));
    }
    printf ("\n len : %d size : %d \n" , len , size);//印出結果
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

