//
//  main.cpp
//  chazhao
//
//  Created by 刘文栖 on 2018/3/2.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//找x
#include <stdio.h>
int main(){
    int buf[200];
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i<n; i++) {
            scanf("%d", &buf[i]);
        }
        int x, ans=-1;
        scanf("%d", &x);
        for (int i=0; i<n; i++) {
            if (x == buf[i]) {
                ans = i;
                break;
            }
        }
        printf("%d", ans);
    }
}

