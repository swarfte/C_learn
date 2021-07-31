#include <stdio.h>
void charing (char [ ]);

int main () {
    char str[100];
    charing (str);
    printf ("%s\n",&str);
    return 0;
}

void charing (char str[ ]){
    for (int number = 0 ; number < 100 ; number++){
        scanf ("%c",&str [number]);
        if (str [number] == '\n'){
            str[number] = '\0';
            break;
        }
    }
}
