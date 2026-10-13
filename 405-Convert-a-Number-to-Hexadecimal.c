
#include <stdio.h>
#include <stdlib.h>
char* toHex(int num) {
    if (num == 0) {
        char* res = (char*)malloc(2 * sizeof(char));
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    unsigned int n = (unsigned int)num;
    char* buffer = (char*)malloc(9 * sizeof(char));
    int index = 0;
    char hex_digits[] = "0123456789abcdef";
    while (n > 0) {
        int current_digit = n & 0xF;
        buffer[index++] = hex_digits[current_digit];
        n >>= 4;
    }
    buffer[index] = '\0';
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = temp;
        start++;
        end--;
    }
    return buffer;
}
int main(void) {
    int num;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        return 1;
    }

    char* result = toHex(num);

    printf("Hexadecimal: %s\n", result);

    free(result);

    return 0;
}
