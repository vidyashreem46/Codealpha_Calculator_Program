#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {
    int choice;
    float num1, num2;

    printf("Calculator Program (CodeAlpha Task 1)\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result = %.2f", add(num1, num2));
            break;
        case 2:
            printf("Result = %.2f", subtract(num1, num2));
            break;
        case 3:
            printf("Result = %.2f", multiply(num1, num2));
            break;
        case 4:
            if (num2 != 0)
                printf("Result = %.2f", divide(num1, num2));
            else
                printf("Division by zero error");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
    
            
