#include <stdio.h>

int main () {
    int number [10] = {0};
    printf ("size of is :%zu \n",sizeof (number) / sizeof (number[0]));
    return 0;
}
