/*************************************************************************
*File Name: recursion.c
*Author: Zsl
*mail: zsl_hfut@163.com
*Created Time: Wed 02 Dec 2020 08:14:51 AM CST
*************************************************************************/
#include <stdio.h>

long long factorial(int digit) {
    if (0 == digit) {
        return 1;
    }
    return factorial(digit - 1) * digit;
}

int main() {
    long long digit;
    scanf("%lld", &digit);

    printf("%lld\n", factorial(digit));

    return 0;
}

