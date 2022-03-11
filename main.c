#include <stdio.h>
#include <stdint.h>

#define BITS 8
#define MASK 0x80

#define SIZE 6

uint8_t value_set[SIZE] = {0x55, 0xAA, 0x01, 0x80, 0x55, 0xAA};

void print_bin(uint8_t *array, int size);

int main()
{
    print_bin(value_set, sizeof(value_set)/sizeof(value_set[0]));
}

void print_bin(uint8_t *array, int size)
{
    printf("\n");

    int a = 0;

    do
    {
        uint8_t mask = MASK;

        for (int i = BITS; i > 0; i--)
        {
            char c = (array[a] & mask) ? '1' : '0';

            printf("%c", c);

            mask >>= 1;
        }

        printf("\n");

        ++a;
    }
    while (--size);
}
