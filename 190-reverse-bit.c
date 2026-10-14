#include <stdio.h>
#include <stdint.h>
uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; i++) {
        result = (result << 1) | (n & 1);
        n >>= 1;
    }
    return result;
}
int main() {
    uint32_t inputNumber;
        printf("Enter a 32-bit unsigned integer: ");
    if (scanf("%u", &inputNumber) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }
    uint32_t reversedNumber = reverseBits(inputNumber);
    printf("Original number: %u\n", inputNumber);
    printf("Reversed bits number: %u\n", reversedNumber);
    
    return 0;
}
