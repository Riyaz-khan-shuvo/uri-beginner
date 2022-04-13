#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
int main()
{
    double a, b, c, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf %lf %lf", &a, &b, &c);
    TRIANGULO = 0.5 * a * c;
    CIRCULO = pi * c * c;
    TRAPEZIO = .5 * ((a + b) * c);
    QUADRADO = b * b;
    RETANGULO = a * b;

    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
    return 0;
}