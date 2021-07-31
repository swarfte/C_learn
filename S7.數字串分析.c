#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int iN (void);//int輸入
char cN (void);//char輸入
double dN (void);//double輸入
void numberfoam(int *, int);//數據排序
void numberO (int * , int);//奇數
void numberE (int * , int);//偶數
int numberB(int * , int);//最大值
int numberS(int * , int);//最小值
double numberA(int * , int);//平均數
void numberM(int *, int , int);//眾數
void numberP (int * , int);//質數
void numberMe (int * , int ); //中位數
void numberVd (int , int);//極差
double numberVa (int * , int , double);//方差
void numberSd(double );//標準差

int main () {
    int *find = 0;//空指標
    int numberlong = 0;//陣列長度
    for (int exit = 1 ; exit != 0 ;){
    printf ("輸入數字進行分析,輸入0進行下一步\n");
    for (int run = 0 ; run != 1 ;) {//讀取數值
        int usenumber = iN();//讀取數字
        if (usenumber == 0) {//讀到0中止
            break;
        }
        find = realloc (find , sizeof (int) * (numberlong + 1));//動態記憶體
        *(find + numberlong) = usenumber;//存入記憶體
        numberlong++;//增加長度
    }
    numberfoam(find ,numberlong);//排序
    numberO(find ,numberlong);//奇數
    numberE(find  , numberlong);//偶數
    printf ("最小值為: %d \n",numberS(find  , numberlong));//最小值
    printf ("最大值為: %d \n",numberB(find  , numberlong));//最大值
    numberVd(numberB (find  , numberlong) , numberS (find  , numberlong));//極差
    printf ("平均值為: %lf \n",numberA (find  , numberlong));//平均值
    numberMe(find  , numberlong);//中位數
    numberM(find  , numberlong , numberB(find  , numberlong));//眾數
    printf ("方差為: %lf \n",numberVa(find  , numberlong ,numberA(find  , numberlong)));//方差
    numberSd(numberVa(find  , numberlong , numberA (find  , numberlong)));//標準差
    numberP (find ,numberlong);//質數
    printf ("輸入1繼續 , 0結束\n");
    exit = iN();
    }
    system ("pause");
    return 0;
}
void numberSd(double Vans){
    double Sans = pow (Vans , 0.5);
    printf ("標準差為: %lf \n",Sans);
}

double numberVa (int *BS , int check , double AV){//方差
    double Vans = 0;
    double dBS [check];
    for (int run = 0 ; run < check ; run++){//轉換為double
        dBS [run] = *(BS + run);
    }
    for (int run = 0 ; run < check ; run++){
        Vans = Vans + pow (AV - dBS[run] ,2);
    }
    return Vans;
}

void numberVd(int max , int min){//極差
    int ans = max - min;
    printf ("極差為 : %d \n",ans);
}

void numberE (int *BS , int check){//偶數
    int save = 0;
    int savenumber [check];
    for (int run = 0 ; run < check ; run++){//求偶數個數
        if(*(BS + run) % 2 == 0){
            *(savenumber + save) = *(BS + run);//存入
            save++;
        }
    }
     if (save > 0 ){
    printf ("偶數有 %d 個 ",save);
    printf ("分別為 : ");
    for (int run = 0 ; run < save ; run++){
        printf ("%d ", *(savenumber + run));
    }
    printf ("\n");
    } else if (save == 0){
        printf ("沒有偶數\n");
    }
}

void numberO (int *BS , int check){//奇數
    int save = 0;
    int savenumber [check];
    for (int run = 0 ; run < check ; run++){//求奇數個數
        if(*(BS + run) % 2 != 0){
            *(savenumber + save) = *(BS + run);//存入
            save++;
        }
    }
     if (save > 0 ){
    printf ("奇數有 %d 個 ",save);
    printf ("分別為 : ");
    for (int run = 0 ; run < save ; run++){
        printf ("%d ", *(savenumber + run));
    }
    printf ("\n");
    } else if (save == 0){
        printf ("沒有奇數\n");
    }
}

void numberMe (int *BS , int check ){//中位數
    double number;
    if (check % 2 != 0) {//奇數情況
        number = *(BS + (check / 2));
    }else if (check %2 == 0 ){//偶數情況
        number = (*(BS + (check / 2) - 1 ) + *(BS + check / 2 )) / 2;
    }
    printf ("中位數為: %lf \n",number);
}

void numberP (int *BS , int check){//質數
    int number = 0;
    int Pnumber [check];//正數的空間
    int bnumber [check];//負數的空間
    for (int run = 0 ;run < check ; run++){//歸0
        *(Pnumber + run) = 0;
        *(bnumber + run) = 0;
    }
    for (int run = 0 ; run < check ; run++ ){//運行的次數
    int find = 2;
        while (*(BS + run) % find != 0 ){//沒餘數則找下個數
            find++;
        }
        if (*(BS + run) > 0){//正數的情況
            if (*(BS + run) == find ){//確認為0餘數
            *(Pnumber + number) = *(BS + run);//存入正數空間
            number++;
            }
        } else if (*(BS + run ) < 0){//負數的情況
            if (*(BS + run) ==  find * (-1) ){
                *(bnumber + number) = *(BS + run);//存入負數空間
                number++;
            }
        }
    }
     printf ("質數有 %d 個 ",number);
     if (number > 0 ){
        printf ("分別為: ");//如果有質數的話
     for (int run = 0 ; run < number ; run++){//先輸出負數
            if (*(bnumber + run) != 0) {
                printf ("%d ",*(bnumber + run));
            }
     }
     for (int run = 0 ; run < number ; run++){//再輸出正數
            if (*(Pnumber + run) != 0){
                printf ("%d ",*(Pnumber + run));
            }
     }
     printf ("\n");
    }
}

void numberM (int *BS , int check , int max){//眾數
    if (max < 0){
        max = abs (max);
    }
    int numberuse [max + 1];//正數記數器
    int numberUSED [max + 1];//負數記數器
    for (int run = 0 ; run < max + 1 ; run++){
        *(numberuse + run) = 0;//設定記數器為0
        *(numberUSED + run) = 0;
    }
    for (int run = 0 ; run < check ; run++){
        if (*(BS + run) > 0){
            numberuse [*(BS + run)]++;//存入正數記數器
        } else if (*(BS + run) < 0){
            numberUSED [ abs(*(BS + run ))]++;//存入負數記數器
        }
    }
    int maxuse,Maxuse = 0;
    for (int run = 0 ; run < max + 1 ; run++){
        if (*(numberuse + maxuse) < *(numberuse + run)){//如果找到比目前更高的次數-正數情況
            maxuse = run;//最多出現次數存入
        }
        if (*(numberUSED + maxuse) < *(numberUSED + run)){//負數情況
            Maxuse = run;
        }
    }
    if (maxuse > 1 || Maxuse > 1){//正/負數某一數出現次數多於1
        printf ("眾數為: ");
        if (*(numberuse + maxuse) <= *(numberUSED + Maxuse)){//負數眾數的出現次數比正數多
            for (int run = 0 ; run < max + 1 ; run++){//找負數出現次數最多的眾數
                if ( *(numberUSED + Maxuse) == *(numberUSED + run)){//找出相同出現次數的負數眾數
                    printf ("%d ",run * (-1));//印出負數
                }
            }
        printf ("出現了 %d 次 ", *(numberUSED + Maxuse) );
    }
        if (*(numberuse + maxuse) >= *(numberUSED + Maxuse)){//正數眾數的出現次數比負數多
             for (int run = 0 ; run < max + 1 ; run++){//找正數出現次數最多的眾數
                if (*(numberuse + maxuse) == *(numberuse + run)){//找出相同出現次數的正數眾數
                    printf ("%d ",run);//印出正數
                }
             }
             printf ("出現了 %d 次 ", *(numberuse + maxuse) );
        }
    } else if (maxuse < 2 && Maxuse < 2 ){//沒有眾數的情況
        printf ("沒有眾數");
    }
    printf ("\n");
}

double numberA (int *BS , int check){// 平均值
    double AV = 0;
    for (int run = 0 ; run < check ; run++) {
        AV = AV + *(BS + run);
    }
    AV = AV / check;
    return AV;
}

int numberS (int * BS , int check){//最小值
     int min = *BS;
     for (int run = 0 ; run < check ; run++) {
        if (min >= *(BS  + run )) {
            min = *(BS + run);
        }
    }
    return min;
}

int numberB (int * BS , int check){//最大值
    int max = *BS;
    for (int run = 0 ; run < check ; run++) {
        if (*(BS + run) >= max) {
            max = *(BS + run);
        }
    }
   return max;
}

void numberfoam(int * number , int check) {//排序
    for (int run = 0 ; run < check - 1 ; run++) {//一共進行多少次
        for (int go = 0 ; go < check - 1 ; go++) {//每一輪的排序次數
            if (*(number + go) > *(number + go + 1 ) ){//如果左邊的比右邊大,則進行交換
                int temp = *(number + go);
                *(number + go) = *(number + go + 1);
                *(number + go + 1 ) = temp;
            }
        }
    }
        printf ("一共有 %d 個數值\n", check);
        printf ("按小到大排序為: ");
    for (int run = 0 ; run < check ; run ++){
        printf ("%d ",*(number + run));
    }
    printf ("\n");
}

int iN (void){//int輸入
    int choose;
    scanf ("%d",&choose);
    return choose;
}

char cN (void){//char輸入
    char choose;
    scanf ("%c",&choose);
    return choose;
}

double dN (void){//double輸入
    double choose;
    scanf ("%lf",&choose);
    return choose;
}

