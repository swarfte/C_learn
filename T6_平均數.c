#include <stdio.h>
int main (){
    int no1, no2, no3;
    printf ("one:");
    scanf ("%d", &no1);
    printf ("two:");
    scanf ("%d", &no2);
    printf ("three:");
    scanf ("%d", &no3);
    double average = ( no1 + no2 + no3) / 3.;
    printf ("answer is %f\n",average);
    return 0;
}
