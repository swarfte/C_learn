#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int intN (void);
char charN (void);
double doubleN (void);

int main () {
    char source [] = "helloWord";
    char *check = &source;
    int area = sizeof(source) / sizeof(*check);
    char usenumber [area];
    strcpy (usenumber,source);
    printf ("%s",usenumber);
    return 0;
}

int intN (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}

char charN (void){
    char choose;
    scanf ("%c",&choose);
    return choose;
}

double doubleN (void){
    double choose;
    scanf ("%d",&choose);
    return choose;
}

