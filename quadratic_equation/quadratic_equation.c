#include <math.h>
#include "quadratic_equation.h"

quadratic_roots solve_equation(double a, double b, double c) {
    quadratic_roots roots;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        roots.root1 = (-b + sqrt(discriminant)) / (2 * a);
        roots.root2 = (-b - sqrt(discriminant)) / (2 * a);
        roots.numRoot = 2;
    } else if (discriminant == 0) {
        roots.root1 = -b / (2 * a);
        roots.numRoots = 1;
    } else {
        roots.numRoots = 0;
    }

    return roots;
}