//
//  main.cpp
//  hash
//
//  Created by 刘文栖 on 2018/3/1.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//统计同成绩人数
//#include <stdio.h>
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF && n != 0) {
//        int hash1[101] = {0};
//        for (int i=0; i<n; i++) {
//            int x;
//            scanf("%d", &x);
//            hash1[x]++;
//        }
//        int x;
//        scanf("%d", &x);
//        printf("%d\n", hash1[x]);
//    }
//}

//Sort
#include <stdio.h>
#define OFFSET 500000
int hash2[1000001] = {0};
//int hash2[1000001];
int main(){
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
//        for (int i=-500000; i<500000; i++) {
//            hash2[i+OFFSET] = 0;
//        }
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d", &x);
            hash2[x+OFFSET] = 1;
        }
        for (int i = 500000; i>=-500000; i--) {
            if (hash2[i+OFFSET] == 1) {
                printf("%d", i);
                m--;
                if (m != 0) {
                    printf(" ");
                } else {
                    printf("\n");
                    break;
                }
            }
        }
    }
}
























