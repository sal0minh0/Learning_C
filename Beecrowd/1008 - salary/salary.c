#include <stdio.h>
int main(){
    
    int NUMBER, hours;

    double moneyperhour, SALARY;
    
    scanf("%d %d %lf", &NUMBER, &hours, &moneyperhour);

    SALARY = hours * moneyperhour;

    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", NUMBER, SALARY);

    return 0;
}