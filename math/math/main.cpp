//
//  main.cpp
//  math
//
//  Created by 刘文栖 on 2018/3/5.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

// 取余问题  a % b 可以用公式 a - (a / b) * b 算出  eg:-15 % 2 == -15 - (-15 / 2) * 2 == -15 - (-7) * 2 == -1

//特殊乘法
//#include <stdio.h>
//int main () {
//    int a, b;
//    while(scanf("%d%d", &a, &b) != EOF) {
//        int buf1[20], buf2[20], size1 = 0, size2 = 0;
//        while (a != 0) {
//            buf1[size1++] = a % 10;
//            a /= 10;
//        }
//        while (b != 0) {
//            buf2[size2++] = b % 10;
//            b /= 10;
//        }
//        int ans = 0;
//        for (int i=0; i<size1; i++) {
//            for (int j=0; j<size2; j++) {
//                ans += buf1[i]*buf2[j];
//            }
//        }
//        printf("%d\n", ans);
//    }
//}
////投机取巧，厉害了
//#include <stdio.h>
//int main () {
//    char a[11], b[11];
//    while (scanf("%s%s", a, b) != EOF) {
//        int ans = 0;
//        for (int i=0; a[i] !=0; i++) {
//            for (int j=0; b[j] != 0; j++) {
//                ans += (a[i] - '0')*(b[j] - '0');
//            }
//        }
//        printf("%d", ans);
//    }
//}

//进制转换
#include <stdio.h>
int main () {
    long long a, b;
    int m;
    while (scanf("%d", &m) != EOF) {
        if (m == 0) break;
        scanf("%lld%lld", &a, &b);
        a = a + b;
        int ans[50], size = 0;
        do {
            ans[size++] = a % m;
            a /= m;
        } while(a != 0);
        for (int i = size - 1; i >= 0; i--) {
            printf("%d", ans[i]);
        }
        printf("\n");
    }
}

























