#include <stdio.h>

int main() {

    int a;
    printf("Number 1: ");
    scanf("%d", &a);

    int b;
    printf("Number 2: ");
    scanf("%d", &b);

    char c;
    printf("Operator: ");
    scanf(" %c", &c);

    switch(c) {

        case '+':
        {
            int sum = a + b;
            printf("Sum : %d", sum);
            break;
        }

        case '-':
        {
            int diff = a - b;
            printf("Difference : %d", diff);
            break;
        }

        case '*':
        {
            int mul = a * b;
            printf("Product : %d", mul);
            break;
        }

        case '/':
        {
            if(b == 0) {
                printf("Denominator cannot be 0");
            }
            else {
                float divi = (float)a / b;   // FIXED
                printf("Quotient : %.2f", divi);
            }
            break;
        }

        case '%':
        {
            int remai = a % b;
            printf("Remainder : %d", remai);
            break;
        }

        default:
            printf("Select a valid operator");
    }

    return 0;
}
