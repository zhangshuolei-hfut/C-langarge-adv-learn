/*************************************************************************
*File Name: pe-45.c
*Author: Zsl
*mail: zsl_hfut@163.com
*Created Time: Thu 03 Dec 2020 10:44:50 AM CST
*************************************************************************/
#include <stdio.h>

typedef unsigned long long ULONGLONG;

bool Binary_Search(ULONGLONG (*func)(ULONGLONG), ULONGLONG num, ULONGLONG left, ULONGLONG right) {
    ULONGLONG mid;
    
    while(left <= right){
        mid = (left + right) >> 1;
        if(func(mid) == num) {
            return true;
        }
        if(func(mid) > num) {
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }

    return false;
}

ULONGLONG Triangle(ULONGLONG n) {
    return n * (n + 1) / 2;
}

ULONGLONG Pentagonal (ULONGLONG n) {
    return n * (3 * n - 1) / 2;
}
ULONGLONG Hexagonal (ULONGLONG n) {
    return n * (2 * n - 1);
}



int main() {
    ULONGLONG result;
    ULONGLONG i = 285;
    while(true) {
        ++i;
        result = Triangle(i);
        if(!Binary_Search(Pentagonal, result, 165, i)) continue;
        if(!Binary_Search(Hexagonal, result, 143, i)) continue;
        printf("%lld\n",result);
        break;
    }
    return 0;
}

