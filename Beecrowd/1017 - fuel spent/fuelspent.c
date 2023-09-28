#include <stdio.h>

int main(){

    int time;
    double speed, liters, distance;

    scanf("%d", &time);
    scanf("%lf", &speed);

    distance = speed * time;

    liters = distance/12;

    printf("%.3lf\n", liters);

    return 0;
}