//
//  main.cpp
//  tanxinsuanfa
//
//  Created by 刘文栖 on 2018/3/3.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//FatMouse's Trade
#include <stdio.h>
#include <algorithm>
using namespace std;
struct goods {
    double j;
    double f;
    double s;
    bool operator < (const goods &A) const {
        return s>A.s;
    }
}buf[1000];
int main(){
    double m;
    int n;
    while (scanf("%lf%d", &m, &n) != EOF) {
        if (m == -1 && n == -1) break;
        for (int i=0; i<n; i++) {
            scanf("%lf%lf", &buf[i].j, &buf[i].f);
            buf[i].s = buf[i].j/buf[i].f;
        }
        sort(buf, buf+n);
        int idx = 0;
        double ans = 0;
        while (m > 0 && idx < n) {
            if (m > buf[idx].f) {
                ans += buf[idx].j;
                m -= buf[idx].f;
            } else {
                ans += buf[idx].j*m/buf[idx].f;//用性价比来求，可以写成m*buf[idx].s
                m = 0;
            }
            idx++;
        }
        printf("%.3lf\n", ans);
    }
}
