#include <stdio.h>
int resend (void);

int main (){
    printf ("?個數(0~9範圍)\n");
    int use [10] = {0};
    for (int run = 1 ; run <= resend(); run++) {
        int num = resend();
        use [num]++;
    }
    int max = 0;
    int up ;
    for (up = 1 ; up < 10 ; up++) {
        if (use [max] <= use [up]) {
            max = up;
        }
    }
    printf ("眾數為%d\n",up);
    return 0;
}

int resend (void){
    int choose;
    scanf ("%d",&choose);
    return choose;
}
