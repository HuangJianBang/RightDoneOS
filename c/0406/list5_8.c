#include<stdio.h>

int main(void) {
    int i;
    int v[7];

    for (i = 0; i < 7; i++) {
        printf("v[%d]:", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 3; i++) {
        int temp = v[i];
        v[i] = v[6-i];
        v[6 - i] = temp;
    }

    puts("reverse array:");

    for (i = 0; i < 7; i++) {
        printf("v[%d] = %d \n", i, v[i]);
    }

    return 0;
}