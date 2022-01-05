#include<stdio.h>

int main(void) {
    int count_num;
    printf("please input the account of number:");
    scanf("%d", &count_num);

    for (int i = 1; i <= count_num; i++) {
        printf("%d", i % 10);
    }

    return 0;
}