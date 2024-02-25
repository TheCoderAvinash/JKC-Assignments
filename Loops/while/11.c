// Armstrong Numbers

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;
    int sum = 0;
    int digitCount = 0;

    // Count the number of digits in the input number
    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    // Reset num to the original value for further processing
    num = originalNum;

    // Calculate the sum of cubes of digits using a loop
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}