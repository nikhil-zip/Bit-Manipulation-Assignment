#include <stdio.h>
int hammingWeight(int n) {
    int count = 0;
    unsigned int num = (unsigned int)n;   
    while (num > 0) {
        num &= (num - 1);
        count++;
    }
    return count;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = hammingWeight(num);
    printf("The Hamming weight of %d is: %d\n", num, result);
    
    return 0;
}
