#include<stdio.h>
#include "sum.c"

int main() {
    int a = 5;
    int b =  3;
    int result = sum(&a, &b);
    printf("Tong cua %d va %d la %d\n", a, b, result);
    return 0;
}