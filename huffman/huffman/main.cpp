//
//  main.cpp
//  huffman
//
//  Created by 刘文栖 on 2018/3/4.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//哈夫曼树
#include <queue>
#include <stdio.h>
using namespace std;
priority_queue<int , vector<int>, greater<int>> Q;
int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        while (Q.empty() == false) Q.pop();
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d", &x);
            Q.push(x);
        }
        int ans = 0;
        while (Q.size() > 1) {
            int a = Q.top();
            Q.pop();
            int b = Q.top();
            Q.pop();
            ans += a + b;
            Q.push(a + b);
        }
        printf("%d\n", ans);
    }
}
