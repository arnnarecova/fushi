//
//  main.cpp
//  learn
//
//  Created by 刘文栖 on 2018/2/27.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//日期1
//#include <stdio.h>
////#include <algorithm>
////#include <string.h>
//#define ISYEAP(x) x%100 != 0 && x%4 == 0 || x%400 == 0 ? 1 : 0
//int dayofMonth[13][2] = {
//    0,0,
//    31,31,
//    28,29,
//    31,31,
//    30,30,
//    31,31,
//    30,30,
//    31,31,
//    31,31,
//    30,30,
//    31,31,
//    30,30,
//    31,31
//};
//struct Date {
//    int Day;
//    int Month;
//    int Year;
//    void nextDay () {
//        Day++;
//        if(Day > dayofMonth[Month][ISYEAP(Year)]){
//            Day = 1;
//            Month++;
//            if(Month > 12){
//                Month = 1;
//                Year++;
//            }
//        }
//    }
//};
//int buf[5001][12][32];
//int Abs(int x){
//    return x < 0 ? -x : x;
//};
////struct E {
////    char name[101];
////    int age;
////    int score;
////} buf[1000];
////bool cmp (E a, E b) {
////    if (a.score != b.score) return a.score < b.score;
////    int tmp = strcmp(a.name, b.name);
////    if (tmp != 0) return tmp < 0;
////    else return a.age < b.age;
////}
////struct E {
////    char name[101];
////    int age;
////    int score;
////    bool operator < (const E &b) const {
////        if(score != b.score) return score < b.score;
////        int tmp = strcmp(name, b.name);
////        if(tmp != 0) return tmp < 0;
////        else return age < b.age;
////
////    }
////}buf[1000];
//int main() {
////    int n;
////    while (scanf("%d", &n) != EOF) {
////        for (int i=0; i<n; i++) {
////            scanf("%s%d%d", buf[i].name, &buf[i].age, &buf[i].score);
////        }
//////        sort(buf, buf + n, cmp);
//////        sort(buf, buf+n, cmp);
////        sort(buf, buf + n);
////        for (int i = 0; i<n; i++) {
////            printf("%s %d %d \n", buf[i].name, buf[i].age, buf[i].score);
////        }
////    }
////    return 0;
//    Date tmp;
//    int cnt=0;
//    tmp.Day = 1;
//    tmp.Month = 1;
//    tmp.Year = 0;
//    while (tmp.Year != 5001) {
//        buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
//        tmp.nextDay();
//        cnt++;
//    }
//    int d1, m1, y1;
//    int d2, m2, y2;
//    while (scanf("%4d%2d%2d", &y1, &m1, &d1) != EOF) {
//        scanf("%4d%2d%2d", &y2, &m2, &d2);
//        printf("%d\n", Abs(buf[y2][m2][d2]-buf[y1][m1][d1]+1));
//    }
//    return 0;
//}

//日期2
#include <stdio.h>
#include <string.h>
#define ISYEAP(x) x%100 != 0 && x%4==0 || x%400 == 0 ? 1 : 0
int dayOfMonth[13][2] = {
    0,0,
    31,31,
    28,29,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31
};
struct Date {
    int Day;
    int Month;
    int Year;
    void nextDay () {
        Day++;
        if(Day > dayOfMonth[Month][ISYEAP(Year)]){
            Day = 1;
            Month++;
            if(Month>12){
                Month = 1;
                Year++;
            }
        }
    }
};
int buf[3001][13][32];
char monthName[13][20] = {
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "Octorber",
    "November",
    "December"
};
char weekName[7][20] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
};
int Main() {
    Date tmp;
    int cnt = 0;
    tmp.Day = 1;
    tmp.Month = 1;
    tmp.Year = 0;
    while (tmp.Year != 3001) {
        buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
        tmp.nextDay();
        cnt++;
    }
    int d, m, y;
    char s[20];
    while (scanf("%d%s%d", &d, s, &y) != EOF) {
        for (m = 1; m<=12; m++) {
            if (strcmp(s, monthName[m]) == 0) {
                break;
            }
        }
        int days = buf[y][m][d] - buf[2012][7][16];
        days += 1;
        puts(weekName[(days%7+7)%7]);
    }
    return 0;
}











