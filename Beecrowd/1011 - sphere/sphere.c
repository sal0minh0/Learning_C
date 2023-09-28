#include <stdio.h>

int main (){

    double pi = 3.14159, R, volume;

    scanf("%lf", &R);

    volume = (4/3.0) * pi * R*R*R;

    printf("VOLUME = %.3lf\n", volume);

    return 0;

}