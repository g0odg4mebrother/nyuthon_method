#include <iostream>
#include <cmath>
using namespace std;


double F(double x) {
    return sin(x);
}
double Trapezoidalrule(double (*func)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (func(a) + func(b));

    for (int i = 1; i < n; ++i) {
        sum += func(a + i * h);
    }

    return sum * h;
}

int main() {
    setlocale(LC_ALL, "rus");
    double a = 0;
    double b = 3.1415926;
    int n = 1000;

    double result = Trapezoidalrule(F, a, b, n);
    cout << "Интеграл от sin(x) от " << a << " до " << b << " примерно равен " << result << endl;

    return 0;
}