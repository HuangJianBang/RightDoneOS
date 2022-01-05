#include <stdio.h>

int main(void) {
    int i, no;

    printf("please input a number:");
    scanf("%d", &no);

    i = 0;
    while(i <= no) {
        printf("%d", i++);
    }

    printf("\n");

    return 0;
}