#include<stdio.h>

int main(void) {
    int num;
    int reverse_num = 0;
    printf("please input a number:");
    scanf("%d", &num);

    int original_num = num;

    while(num > 0) {
        reverse_num = reverse_num * 10 + num % 10;
        // printf("%d", num % 10);
        num /= 10;
    }

    printf("%d reverse version is %d", original_num, reverse_num);
}