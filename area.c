#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    // variable declaration
    double A, B, C, areaOfTriangle, areaOfCircle, areaOfTrapezium, areaOfSquare, areaOfRectangle;
    // take input
    scanf("%lf %lf %lf", &A, &B, &C);
    // Calculate area
    areaOfTriangle = (A * C) / 2;
    areaOfCircle = pi * pow(C, 2);
    areaOfTrapezium = (A + B) * C / 2;
    areaOfSquare = B * B;
    areaOfRectangle = A * B;
    // print the result
    printf("TRIANGULO: %.3lf\n", areaOfTriangle);
    printf("CIRCULO: %.3lf\n", areaOfCircle);
    printf("TRAPEZIO: %.3lf\n", areaOfTrapezium);
    printf("QUADRADO: %.3lf\n", areaOfSquare);
    printf("RETANGULO: %.3lf\n", areaOfRectangle);

    return 0;
}
