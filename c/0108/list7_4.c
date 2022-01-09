#include<stdio.h>

int main(void) {
    int a[5];

    printf("size of int : %u \n", (unsigned)sizeof(int));
    printf("length of array a : %lu", sizeof(a)/sizeof(a[0]));
}