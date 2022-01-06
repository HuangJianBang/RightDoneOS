#include<stdio.h>

#define NUMBER 5 

int max_of(int v[], int n) {
    int i;
    int max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max; 
}

int main(void) {
    int i;
    int eng[NUMBER];
    int mat[NUMBER];
    int max_e, max_m; 

    printf("please input %d students' score: \n", NUMBER);

    for (i = 0; i < NUMBER; i++) {
        printf("[%d] English:", i+1);
        scanf("%d", &eng[i]);
        putchar('\n');

        printf("math:");
        scanf("%d", &mat[i]);
    }

    max_e = max_of(eng, NUMBER);
    max_m = max_of(mat, NUMBER);

    printf("Highest score of math is %d.", max_m);
    printf("Hihest score of English is %d.", max_e);

    return 0;
}