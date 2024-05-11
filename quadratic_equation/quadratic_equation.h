#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

typeof struct {
    double root1;
    double root2;
    int numRoots;
} quadratic_roots;
quadratic_roots solve_equation(double a, double b, double c);

#endif