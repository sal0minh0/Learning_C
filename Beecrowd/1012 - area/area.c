#include <stdio.h>

int main(){
    double A,B,C, art, arc, pi = 3.14159, at, as, ar;

    scanf("%lf %lf %lf", &A, &B, &C);

    art = (A * C)/2;
    arc = pi * C * C;
    at = (A + B)*C/2;
    as = B * B;
    ar = A * B;

    printf("TRIANGULO: %.3lf\n",art);
    printf("CIRCULO: %.3lf\n", arc); 
    printf("TRAPEZIO:%.3lf\n", at);
    printf("QUADRADO: %.3lf\n", as);
    printf("RETANGULO: %.3lf\n", ar);

    return 0;
}