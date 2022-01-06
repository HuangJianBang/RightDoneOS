#include<stdio.h>

#define NUMBER 5 

int main(void) {
    int i;
    int tensu[NUMBER];
    int sum;

    printf("%d \n", NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("%2d:", i+1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("total: %5d \n", sum);
    printf("mean: %5.1f\n", (double) sum / NUMBER);

    return 0;
}