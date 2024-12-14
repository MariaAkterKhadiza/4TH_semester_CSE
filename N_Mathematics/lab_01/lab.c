#include <stdio.h>
#include <math.h>

float f(float x) {
    return x - exp(-x);
}

float df(float x) {
    return 1 + exp(-x);
}

int main() {
    float x1, x2, h, tol;
    printf("Enter the initial value x1: ");
    scanf("%f", &x1);

    if (df(x1) == 0) {
        printf("The initial value is not suitable.\n");
        return 1;
    }

    printf("Enter the tolerance: ");
    scanf("%f", &tol);

    printf("The iterations are:\n");
    do {
        x2 = x1 - f(x1) / df(x1);
        h = fabs(x1 - x2);
        x1 = x2;
        printf("%.6f\n", x1);
    } while (h > tol);

    printf("An approximate root is %.6f\n", x2);
    return 0;
}
