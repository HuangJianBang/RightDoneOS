#include<stdio.h>

int count_bits(unsigned x) {
    int bits = 0;
    while (x) {
        if (x & 1U) {
            bits++;
        }

        x >>= 1;
    }

    return bits;
}

int int_bits(void) {
    return count_bits(~0U);
}

void print_bits(unsigned x) {
    int i; 
    for (i = int_bits()-1; i >= 0; i--) {
        putchar(((x>>i) & 1U) ? '1' : '0');
    }
}

int main(void) {
    // unsigned int i = 5;
    // int bits = count_bits(i);
    // printf("%d", bits);
    // putchar('\n');
    // printf("%d \n", int_bits());

    unsigned a, b;
    printf("please input a: ");
    scanf("%u", &a);
    putchar('\n');
    printf("b:");
    scanf("%u", &b);
    putchar('\n');

    printf("a = ");
    print_bits(a);

    // putchar('\n');
    printf("b = ");

    print_bits(b);
    putchar('\n');
}