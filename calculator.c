#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Simple Calculator Program\n");
    printf("--------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;
        case 4:
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error: Division by zero!");
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
