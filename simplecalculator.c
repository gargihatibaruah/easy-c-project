#include <stdio.h>
#include <float.h>
char WRONG;
double simpleCalc(double num1, double num2, char op) {
    double res;
    switch (op) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        printf("Error! Operator is not correct.\n");
        return WRONG;
    }
    return res;
}

int main() {
    char op;
    double num1, num2, res;

    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    res = simpleCalc(num1, num2, op);

    
    if (res != WRONG)
        printf("Result: %.2lf\n", res);
    
    return 0;
}
