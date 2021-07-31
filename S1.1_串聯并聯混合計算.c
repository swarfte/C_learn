#include <stdio.h>

int main () {
    printf ("輸入字母\na.串聯      b.并聯    c.串聯&并聯      (A,B上限為10,C為4)\n");
    char go;
    scanf ("%c", &go);
    if (go == 'a') {
        printf ("輸入串聯電阻個數\n");
        int Ago;
        scanf ("%d", &Ago);
        if (Ago == 1) {
            printf ("輸入電阻\n");
            double R1;
            scanf ("%lf", &R1);
            printf ("答案為%lf\n",R1);
        }
        if (Ago == 2) {
            printf ("輸入電阻\n");
            double R1, R2;
            scanf ("%lf%lf", &R1, &R2);
            double Ans;
            Ans = R1 + R2;
            printf ("答案為%lf\n",Ans);
        }
        if (Ago == 3) {
            printf ("輸入電阻\n");
            double R1, R2, R3;
            scanf ("%lf%lf%lf", &R1, &R2, &R3);
            double Ans;
            Ans = R1 + R2 + R3;
            printf ("答案為%lf\n",Ans);
        }
        if (Ago == 4) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4;
            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
            double Ans;
            Ans = R1 + R2 + R3 + R4;
            printf ("答案為%lf\n",Ans);
        }
        if (Ago == 5) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5;
            scanf ("%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5);
            double Ans;
            Ans = R1 + R2 + R3 + R4 + R5;
            printf ("答案為%lf\n",Ans);
        }
        if (Ago == 6) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6;
            scanf ("%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5,&R6);
            double Ans;
            Ans = R1 + R2 + R3 + R4 + R5 + R6;
            printf ("答案為%lf\n",Ans);
        }
        if (Ago == 7) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7;
            scanf ("%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5,&R6,&R7);
            double Ans;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7;
            printf ("答案為%lf\n",Ans);
        }
        if (Ago == 8) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7,R8;
            scanf ("%lf%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5,&R6,&R7,&R8);
            double Ans;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8;
            printf ("答案為%lf\n",Ans);
        }
         if (Ago == 9) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7,R8,R9;
            scanf ("%lf%lf%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5,&R6,&R7,&R8,&R9);
            double Ans;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9;
            printf ("答案為%lf\n",Ans);
         }
          if (Ago == 10) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7,R8,R9,R10;
            scanf ("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5,&R6,&R7,&R8,&R9,&R10);
            double Ans;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10;
            printf ("答案為%lf\n",Ans);
          }
        if (Ago != 1 && Ago != 2 && Ago != 3 && Ago != 4 && Ago != 5 && Ago != 6 && Ago != 7 && Ago != 8 && Ago != 9 && Ago != 10) {
            printf ("無效的輸入\n");
        }
    }
    if (go == 'b') {
        printf ("請輸入并聯電阻個數\n");
        int Bgo;
        scanf ("%d", &Bgo);
        if (Bgo == 1) {
            printf ("輸入電阻\n");
            double R1;
            scanf ("%lf", &R1);
            printf ("答案為%lf\n",R1);
        }
        if (Bgo == 2) {
            printf ("輸入電阻\n");
            double R1, R2;
            scanf ("%lf%lf", &R1, &R2);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            Ans = R1 + R2;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
    }
        if (Bgo == 3) {
            printf ("輸入電阻\n");
            double R1, R2, R3;
            scanf ("%lf%lf%lf", &R1, &R2, &R3);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            Ans = R1 + R2 + R3;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
        if (Bgo == 4) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4;
            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            Ans = R1 + R2 + R3 + R4;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
        if (Bgo == 5) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5;
            scanf ("%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            R5 = 1 / R5;
            Ans = R1 + R2 + R3 + R4 + R5;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
        if (Bgo == 6) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6;
            scanf ("%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5, &R6);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            R5 = 1 / R5;
            R6 = 1 / R6;
            Ans = R1 + R2 + R3 + R4 + R5 + R6;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
         if (Bgo == 7) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7;
            scanf ("%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5, &R6,&R7);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            R5 = 1 / R5;
            R6 = 1 / R6;
            R7 = 1 / R7;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
         if (Bgo == 8) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7,R8;
            scanf ("%lf%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5, &R6,&R7,&R8);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            R5 = 1 / R5;
            R6 = 1 / R6;
            R7 = 1 / R7;
            R8 = 1 / R8;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
        if (Bgo == 9 ){
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7,R8,R9;
            scanf ("%lf%lf%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5, &R6,&R7,&R8,&R9);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            R5 = 1 / R5;
            R6 = 1 / R6;
            R7 = 1 / R7;
            R8 = 1 / R8;
            R9 = 1 / R9;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
        if (Bgo == 10) {
            printf ("輸入電阻\n");
            double R1, R2, R3, R4, R5,R6,R7,R8,R9,R10;
            scanf ("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf", &R1, &R2, &R3, &R4, &R5, &R6,&R7,&R8,&R9,&R10);
            double Ans;
            R1 = 1 / R1;
            R2 = 1 / R2;
            R3 = 1 / R3;
            R4 = 1 / R4;
            R5 = 1 / R5;
            R6 = 1 / R6;
            R7 = 1 / R7;
            R8 = 1 / R8;
            R9 = 1 / R9;
            R10 = 1 / R10;
            Ans = R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10;
            Ans = 1 / Ans;
            printf ("答案為%lf\n",Ans);
        }
        if (Bgo != 1 && Bgo != 2 && Bgo != 3 && Bgo != 4 && Bgo != 5 && Bgo != 6 && Bgo != 7 && Bgo != 8 && Bgo != 9 && Bgo != 10) {
            printf ("無效的輸入\n");
        }
    }
    if (go == 'c') {
        printf ("請輸入總電阻個數\n");
        int Cgo;
        scanf ("%d", &Cgo);
        if (Cgo == 1) {
            printf ("滾去用a或b的功能\n");
        }
        if (Cgo == 2) {
            printf ("輸入串聯的電阻數量\n");
            int LL4;
            //LL4=串聯
            scanf ("%d", &LL4);
            printf ("輸入并聯的電阻數量\n");
            int TT2;
            //TT2=并聯
            scanf ("%d", &TT2);
            if (LL4 == 2 || TT2 == 0) {
                printf ("請輸入兩個電阻的阻值\n");
                double R1, R2, ans;
                scanf ("%lf%lf", &R1, &R2);
                ans = R1 + R2;
                printf ("答案為%lf\n", ans);
            }
            if (LL4 == 0 || TT2 == 2) {
                printf ("請輸入兩個電阻的阻值\n");
                double R1, R2, ans;
                scanf ("%lf%lf", &R1, &R2);
                R1 = 1 / R1;
                R2 = 1 / R2;
                ans = R1 + R2;
                ans = 1 / ans;
                printf ("答案為%lf\n", ans);
            }
        }
        if (Cgo == 3) {
            printf ("輸入串聯的電阻數量\n");
            int LL4;
            //LL4=串聯
            scanf ("%d", &LL4);
            printf ("輸入并聯的電阻數量\n");
            int TT2;
            //TT2=并聯
            scanf ("%d", &TT2);
            if (LL4 == 3 || TT2 == 0) {
                printf ("請輸入三個電阻的阻值\n");
                double R1, R2, R3, ans;
                scanf ("%lf%lf%lf", &R1, &R2, &R3);
                ans = R1 + R2 + R3;
                printf ("答案為%lf\n", ans);
            }
            if (LL4 == 0 || TT2 == 3) {
                printf ("請輸入三個電阻的阻值\n");
                double R1, R2, R3, ans;
                scanf ("%lf%lf%lf", &R1, &R2, &R3);
                R1 = 1 / R1;
                R2 = 1 / R2;
                R3 = 1 / R3;
                ans = R1 + R2 + R3;
                ans = 1 / ans;
                printf ("答案為%lf\n", ans);
            }
            if (LL4 == 2 && TT2 == 2) {
                    printf ("是要先并再串還是先串再并\n");
                    printf ("1.先并再串     2.先串再并\n");
                    int ZZIP;
                    scanf ("%d", &ZZIP);
                    if (ZZIP == 1) {
                        printf ("在R1, R2, R3中,那兩個是并聯(先并再串)_(填數字)\n");
                        int ZZ, YY;
                        scanf ("%d%d", &ZZ, &YY);
                        if (ZZ == 1 && YY ==2 || ZZ == 2 && YY == 1) {
                            printf ("請輸入R1,R2,R3的電阻\n");
                            double R1, R2, R3, R12, Ans;
                            scanf ("%lf%lf%lf", &R1, &R2, &R3);
                            R1 = 1 / R1;
                            R2 = 1 / R2;
                            R12 = R1 + R2;
                            R12 = 1 / R12;
                            Ans = R12 + R3;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY ==3 || ZZ == 3 && YY == 1) {
                            printf ("請輸入R1,R2,R3的電阻\n");
                            double R1, R2, R3, R13, Ans;
                            scanf ("%lf%lf%lf", &R1, &R2, &R3);
                            R1 = 1 / R1;
                            R3 = 1 / R3;
                            R13 = R1 + R3;
                            R13 = 1 / R13;
                            Ans = R13 + R2;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 2 && YY ==3 || ZZ == 3 && YY == 2) {
                            printf ("請輸入R1,R2,R3的電阻\n");
                            double R1, R2, R3, R23, Ans;
                            scanf ("%lf%lf%lf", &R1, &R2, &R3);
                            R2 = 1 / R1;
                            R3 = 1 / R3;
                            R23 = R2 + R3;
                            R23 = 1 / R23;
                            Ans = R23 + R2;
                            printf ("答案%lf\n", Ans);
                    }
                }
                    if (ZZIP == 2) {
                        printf ("在R1, R2, R3中,那兩個是串(先串再并)_(填數字)\n");
                        int ZZ, YY;
                        scanf ("%d%d", &ZZ, &YY);
                        if (ZZ == 1 && YY ==2 || ZZ == 2 && YY == 1) {
                            printf ("請輸入R1,R2,R3的電阻\n");
                            double R1, R2, R3, R12, Ans;
                            scanf ("%lf%lf%lf", &R1, &R2, &R3);
                            R12 = R1 + R2;
                            R12 = 1 / R12;
                            R3 = 1 / R3;
                            Ans = R12 + R3;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY ==3 || ZZ == 3 && YY == 1) {
                            printf ("請輸入R1,R2,R3的電阻\n");
                            double R1, R2, R3, R13, Ans;
                            scanf ("%lf%lf%lf", &R1, &R2, &R3);
                            R13 = R1 + R3;
                            R13 = 1 / R13;
                            R2 = 1 / R2;
                            Ans = R13 + R2;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 2 && YY ==3 || ZZ == 3 && YY == 2) {
                            printf ("請輸入R1,R2,R3的電阻\n");
                            double R1, R2, R3, R23, Ans;
                            scanf ("%lf%lf%lf", &R1, &R2, &R3);
                            R23 = R2 + R3;
                            R23 = 1 / R23;
                            R1= 1 / R1;
                            Ans = R23 + R1;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                    }
            }
        }
    }
        if (Cgo == 4) {
           printf ("輸入串聯的電阻數量\n");
            int LL4;
            //LL4=串聯
            scanf ("%d", &LL4);
            printf ("輸入并聯的電阻數量\n");
            int TT2;
            //TT2=并聯
            scanf ("%d", &TT2);
                if (LL4 == 4 || TT2 == 0) {
                printf ("請輸入四個電阻的阻值\n");
                double R1, R2, R3, R4, ans;
                scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                ans = R1 + R2 + R3 + R4;
                printf ("答案為%lf\n", ans);
            }
                if (LL4 == 0 || TT2 == 4) {
                printf ("請輸入四個電阻的阻值\n");
                double R1, R2, R3, R4, ans;
                scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                R1 = 1 / R1;
                R2 = 1 / R2;
                R3 = 1 / R3;
                R4 = 1 / R4;
                ans = R1 + R2 + R3 + R4;
                ans = 1 / ans;
                printf ("答案為%lf\n", ans);
            }
                if (LL4 == 2 && TT2 == 3) {
                    printf ("是要先并再串還是先串再并\n");
                    printf ("1.先并再串     2.先串再并\n");
                    int ZZIP;
                    scanf ("%d", &ZZIP);
                    if (ZZIP == 1) {
                        printf ("在R1, R2, R3, R4中,那三個是并聯(先并再串)_(填數字)\n");
                        int ZZ, YY, XX;
                        scanf ("%d%d%d", &ZZ, &YY, &XX);
                        if (ZZ == 1 && YY == 2 && XX == 3|| ZZ == 1 && YY == 3 && XX == 2 || ZZ == 2  && YY == 3 && XX == 1|| ZZ ==  2 && YY ==  1 && XX ==  3|| ZZ == 3 && YY ==  2 && XX == 1 || ZZ == 3 && YY == 1 && XX == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R123, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R1 = 1 / R1;
                            R2 = 1 / R2;
                            R3 = 1 / R3;
                            R123 = R1 + R2 + R3;
                            R123 = 1 / R123;
                            Ans = R123 + R4;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 2 && YY == 3 && XX == 4|| ZZ == 2 && YY == 4 && XX == 3 || ZZ == 4  && YY == 3 && XX == 2|| ZZ ==  4 && YY ==  2 && XX ==  3|| ZZ == 3 && YY ==  2 && XX == 4 || ZZ == 3 && YY == 4 && XX == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R234, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R2 = 1 / R1;
                            R4 = 1 / R4;
                            R3 = 1 / R3;
                            R234 = R2 + R3 + R4;
                            R234 = 1 / R234;
                            Ans = R234 + R1;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 3 && XX == 4|| ZZ == 1 && YY == 4 && XX == 3 || ZZ == 4  && YY == 3 && XX == 1|| ZZ ==  4 && YY ==  1 && XX ==  3|| ZZ == 3 && YY ==  1 && XX == 4 || ZZ == 3 && YY == 4 && XX == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R134, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R1 = 1 / R1;
                            R3 = 1 / R3;
                            R4 = 1 / R4;
                            R134 = R1 + R3 + R4;
                            R134 = 1 / R134;
                            Ans = R134 + R2;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 2 && XX == 4|| ZZ == 1 && YY == 4 && XX == 2 || ZZ == 2  && YY == 3 && XX == 4|| ZZ ==  2 && YY ==  4 && XX ==  3|| ZZ == 3 && YY ==  2 && XX == 4 || ZZ == 3 && YY == 4 && XX == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R124, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R1 = 1 / R1;
                            R2 = 1 / R2;
                            R4 = 1 / R4;
                            R124 = R1 + R2 + R4;
                            R124 = 1 / R124;
                            Ans = R124 + R3;
                            printf ("答案%lf\n", Ans);

                        }
                    }
                    if (ZZIP == 2) {
                        printf ("在R1, R2, R3, R4中,那兩個是串聯(先串再并)_(填數字)\n");
                        int ZZ, YY;
                        scanf ("%d%d", &ZZ, &YY);
                        if (ZZ == 1 && YY == 2 || ZZ == 2 && YY == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R12, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R12 = R1 + R2;
                            R12 = 1 / R12;
                            R3 = 1 / R3;
                            R4 = 1 / R4;
                            Ans = R12 + R3 + R4;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 3 || ZZ == 3 && YY == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R13, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R13 = R1 + R3;
                            R3 = 1 / R3;
                            R4 = 1 / R4;
                            R13 = 1 / R13;
                            Ans = R13 + R3 + R4;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 4 || ZZ == 4 && YY == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R14, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R14 = R1 + R4;
                            R2 = 1 / R2;
                            R3 = 1 / R3;
                            R14 = 1 / R14;
                            Ans = R14 + R3 + R2;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 2 && YY == 3 || ZZ == 3 && YY == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R23, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R23 = R2 + R3;
                            R23 = 1 / R23;
                            R1 = 1 / R1;
                            R4 = 1 / R4;
                            Ans = R23 + R1 + R4;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 4 && YY == 2 || ZZ == 2 && YY == 4) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R24, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R24 = R4 + R2;
                            R24 = 1 / R24;
                            R3 = 1 / R3;
                            R1 = 1 / R1;
                            Ans = R24 + R3 + R1;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 3 && YY == 4 || ZZ == 4 && YY == 3) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R34, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R34 = R3 + R4;
                            R34 = 1 / R34;
                            R1 = 1 / R1;
                            R2 = 1 / R2;
                            Ans = R34 + R1 + R2;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                    }
                }
                if (LL4 == 3 && TT2 == 2) {
                    printf ("是要先并再串還是先串再并\n");
                    printf ("1.先并再串     2.先串再并\n");
                    int ZZIP;
                    scanf ("%d", &ZZIP);
                    if (ZZIP == 1) {
                        printf ("在R1, R2, R3, R4中,那兩個是并聯(先并再串)_(填數字)\n");
                        int ZZ, YY;
                        scanf ("%d%d", &ZZ, &YY);
                        if (ZZ == 1 && YY == 2 || ZZ == 2 && YY == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R12, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R1 = 1 / R1;
                            R2 = 1 / R2;
                            R12 = R1 + R2;
                            R12 = 1 / R12;
                            Ans = R12 + R3 + R4;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 3 || ZZ == 3 && YY == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R13, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R1 = 1 / R1;
                            R3 = 1 / R3;
                            R13 = R1 + R2;
                            R13 = 1 / R13;
                            Ans = R13 + R2 + R4;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 4 || ZZ == 4 && YY == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R14, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R1 = 1 / R1;
                            R4 = 1 / R4;
                            R14 = R1 + R4;
                            R14 = 1 / R14;
                            Ans = R14 + R3 + R2;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 2 && YY == 3 || ZZ == 3 && YY == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R23, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R3 = 1 / R3;
                            R2 = 1 / R2;
                            R23 = R1 + R2;
                            R23 = 1 / R23;
                            Ans = R23 + R1 + R4;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 4 && YY == 2 || ZZ == 2 && YY == 4) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R24, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R4 = 1 / R4;
                            R2 = 1 / R2;
                            R24 = R4 + R2;
                            R24 = 1 / R24;
                            Ans = R24 + R3 + R1;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 3 && YY == 4 || ZZ == 4 && YY == 3) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R34, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R3 = 1 / R3;
                            R4 = 1 / R4;
                            R34 = R3 + R4;
                            R34 = 1 / R34;
                            Ans = R34 + R1 + R2;
                            printf ("答案%lf\n", Ans);
                        }
                    }
                    if (ZZIP == 2) {
                         printf ("在R1, R2, R3, R4中,那三個是串聯(先串再并)_(填數字)\n");
                        int ZZ, YY, XX;
                        scanf ("%d%d%d", &ZZ, &YY, &XX);
                        if (ZZ == 1 && YY == 2 && XX == 3|| ZZ == 1 && YY == 3 && XX == 2 || ZZ == 2  && YY == 3 && XX == 1|| ZZ ==  2 && YY ==  1 && XX ==  3|| ZZ == 3 && YY ==  2 && XX == 1 || ZZ == 3 && YY == 1 && XX == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R123, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R123 = R1 + R2 + R3;
                            R4 = 1 / R4;
                            R123 = 1 / R123;
                            Ans = R123 + R4;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 2 && YY == 3 && XX == 4|| ZZ == 2 && YY == 4 && XX == 3 || ZZ == 4  && YY == 3 && XX == 2|| ZZ ==  4 && YY ==  2 && XX ==  3|| ZZ == 3 && YY ==  2 && XX == 4 || ZZ == 3 && YY == 4 && XX == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R234, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R234 = R2 + R3 + R4;
                            R1 = 1 / R1;
                            R234 = 1 / R234;
                            Ans = R234 + R1;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 3 && XX == 4|| ZZ == 1 && YY == 4 && XX == 3 || ZZ == 4  && YY == 3 && XX == 1|| ZZ ==  4 && YY ==  1 && XX ==  3|| ZZ == 3 && YY ==  1 && XX == 4 || ZZ == 3 && YY == 4 && XX == 1) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R134, Ans;
                            scanf ("%lf%lf%lf%lf", &R1, &R2, &R3, &R4);
                            R134 = R1 + R3 + R4;
                            R2 = 1 / R2;
                            R134 = 1 / R134;
                            Ans = R134 + R2;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                        }
                        if (ZZ == 1 && YY == 2 && XX == 4|| ZZ == 1 && YY == 4 && XX == 2 || ZZ == 2  && YY == 3 && XX == 4|| ZZ ==  2 && YY ==  4 && XX ==  3|| ZZ == 3 && YY ==  2 && XX == 4 || ZZ == 3 && YY == 4 && XX == 2) {
                            printf ("請輸入R1,R2,R3,R4的電阻\n");
                            double R1, R2, R3, R4, R124, Ans;
                            R124 = R1 + R2 + R4;
                            R3 = 1 / R3;
                            R124 = 1 / R124;
                            Ans = R124 + R3;
                            Ans = 1 / Ans;
                            printf ("答案%lf\n", Ans);
                    }
                }
            }
        }
    }
    if (go != 'a' && go != 'b' && go != 'c') {
        printf ("無效的輸入\n");
    }
    system("pause");
    return 0;
}

