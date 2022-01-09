#include<stdio.h>
#include<math.h>

int count_bits(unsigned x) {
    int bits = 0;

    while(x) {
        if (x & 1U) {
            bits++;
        }

        x >>= 1;
    }

    return bits;
}

int int_bits() {
    return count_bits(~0U);
}

unsigned int set(unsigned x, int pos) {
    int bits = int_bits();
    double value = 0.0; 

    if (pos >= bits) {
        return 0;
    }

    for (int i = bits - 1; i >= 0; i--) {
        if (i + 1 == pos) {
            value += 1 * pow(2.0, i);
            continue;
        }
        value += ((x >> i) & 1U) * pow(2.0, i);
    }

    return (unsigned int) value;
}

int main(void) {
    printf("%u\n", set(10U, 1));
}