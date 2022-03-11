#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define SIZE 20

void print_pattern(char *str, uint8_t size);

int main()
{
    char input_str[SIZE];
    printf("Input: ");
    scanf("%s", input_str);

    print_pattern(input_str, strlen(input_str));
}

void print_pattern(char *str, uint8_t size)
{
    printf("\n");

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i == 0)
                printf("%c", str[j]);
            else if(i == size - 1)
                printf("%c", str[size - j - 1]);
            else
            {
                printf("%c", str[i]);
                for(int k = 0; k < size - 2; k++) printf(" ");
                printf("%c", str[size - 1 - i]);
                break;
            }
        }
        printf("\n");
    }
}
