#include <stdio.h>

int main () {
    printf ("輸入三個數字進行排序\n");
    int no1, no2, no3,ans1,ans2,ans3;
    scanf ("%d%d%d", &no1, &no2 ,&no3);
    ans3 = no3;
    ans2 = no2;
    ans1 = no1;
    //預設3最大,2次之,1最少
    if (no1 >= no2 && no2 >= no3  ) {
        ans3 = no1;
        ans2 = no2;
        ans1 = no3;
        //1最大 2次之 3最小
    }
         if (no1 >= no3 && no3 >= no2 ) {
        ans3 = no1;
        ans2 = no3;
        ans1 = no2;
        //1最大 3次之 2最少
     }
     if (no2 >= no3 && no3 >= no1 ) {
         ans3 = no2;
         ans2 = no3;
         ans1 = no1;
         //2最大 3次之 1最小
     }
     if (no2 >= no1 && no1 >= no3) {
        ans3 = no2;
        ans2 = no1;
        ans1 = no3;
        //2最大,1次之,3最小
     }
     if (no3 >= no1 && no1 >= no2) {
        ans3 = no3;
        ans2 = no1;
        ans1 = no2;
        //3最大,1次之,2最少
     }
    printf ("由小到大的順序為%d %d  %d\n",ans1, ans2, ans3);
    //A3 3 = 6種情況
    system ("pause");
    return 0;
}
