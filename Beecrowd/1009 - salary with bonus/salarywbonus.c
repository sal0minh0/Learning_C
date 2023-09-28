#include <stdio.h>

int main(){
    
    char seller;

    double saletotal, valuetotal, finalsalary;
    
    scanf("%s %lf %lf", &seller, &saletotal, &valuetotal);

    finalsalary = (valuetotal * 0.15) + saletotal;

    printf("TOTAL = R$ %.2lf\n", finalsalary);

    return 0;
}