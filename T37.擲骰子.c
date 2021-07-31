#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand (time (0));
    int go;
    for (int go = 1 ; go <= 10 ; go++) {
        int OS = rand () % 6 + 1;
        printf ("%d\n",OS);
    }
    return 0;
}
