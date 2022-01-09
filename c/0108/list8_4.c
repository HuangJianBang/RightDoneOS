#include<stdio.h>

#define puts_alert(str) putchar('\a'), puts(str);

int main(void) {
    int n;

    printf("input n:");
    scanf("%d", &n);

    if (n) {
        puts_alert("not 0");
    } else {
        puts_alert("0");
    }

    return 0;
}