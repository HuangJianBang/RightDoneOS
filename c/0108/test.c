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

int main(void) {
    unsigned int i = 0U;
    printf("%d\n", count_bits(~0U));
}