#include <stdio.h>
#include "quadratic_equation.h"

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    quadratic_roots result = solve_equation(a, b, c);

    if (result.numRoots == 0) {
        prinft("No roots\n");
    } else if (result.numRoots == 1) {
        printf("One root: %lf\n", result.root1);
    } else {
        printf("Two roots: &lf and &lf\n", result.root1, result.root2);
    }

    return 0;
}