//
//  main.cpp
//  paiban
//
//  Created by 刘文栖 on 2018/3/1.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//输出梯形
//#include <stdio.h>
//int main(){
//    int h;
//    while (scanf("%d", &h) != EOF) {
//        int maxLine = h + (h-1)*2;
//        for (int i=0; i<h; i++) {
//            int len = maxLine - h - i*2;
//            for (int j=0; j<maxLine; j++) {
//                if (j < len) {
//                    printf(" ");
//                } else {
//                    printf("*");
//                }
//            }
//            printf("\n");
//        }
//    }
//}

//叠筐
#include <stdio.h>
int main(){
    int outPutBuf[82][82];
    char a, b;
    int n;
    bool firstCase = true;
    while (scanf("%d %c %c", &n, &a, &b) == 3) {
        if (firstCase == true) {
            firstCase = false;
        }
        else printf("\n");
        for (int i=1, j=1; i<=n; i+=2, j++) {
            int x = n/2 + 1, y = x;
            x -= j - 1;y -= j -1;
            char c = j%2 == 1 ? a : b;
            for (int k = 1; k <= i; k++) {
                outPutBuf[x+k-1][y] = c;
                outPutBuf[x][y+k-1] = c;
                outPutBuf[x+i-1][y+k-1] = c;
                outPutBuf[x+k-1][y+i-1] = c;
            }
        }
        if (n != 1) {
            outPutBuf[1][1] = ' ';
            outPutBuf[n][1] = ' ';
            outPutBuf[1][n] = ' ';
            outPutBuf[n][n] = ' ';
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                printf("%c", outPutBuf[i][j]);
            }
            printf("\n");
        }
    }
}

//爱心
//#include<stdio.h>
//int main()
//{
//    int i;
//    float y,x,a;
//    for (y = 1.5f; y > -1.5f; y -= 0.13f) {
//        for (x = -1.5f; x < 1.5f; x += 0.06f) {
//            a = x * x + y * y - 1;
//            putchar(a * a * a - x * x * y * y * y <= 0.0f ? '@' : ' ');
//        }
//        putchar('\n');
//    }
//}























