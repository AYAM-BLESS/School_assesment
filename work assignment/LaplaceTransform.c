
#include <stdio.h>
#include <math.h>

double f(double t) {
    // Define the function to be transformed here
    return sin(t);
}

double laplace(double s) {
    // Compute the Laplace transform of the function here
    double a = 0, b = 10, n = 1000;
    double h = (b - a) / n;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        double ti = a + i * h;
        double tip1 = a + (i + 1) * h;
        double fi = f(ti);
        double fip1 = f(tip1);
        sum += h / 2 * (fi * exp(-s * ti) + fip1 * exp(-s * tip1));
    }

    return sum;
}

int main() {
    double s;
    printf("Enter the value of s: ");
    scanf("%lf", &s);

    double L = laplace(s);

    printf("The Laplace transform of the function is: %lf\n", L);

    return 0;
}