#include <stdio.h>

int main() {
    float num;  // Declare a float variable to hold the input value

    // Take the floating-point number as input
    printf("Enter a floating-point number: ");
    scanf("%f", &num);  // %f is used to scan a float number

    // Print the entered floating-point number
    printf("You entered: %.2f\n", num);  // %.2f to print 2 decimal places

    return 0;
}
