#include <stdio.h>

int main(){

    int code1, numberunits1, code2, numberunits2;
    
    double price1, price2, amount;

    scanf("%d %d %lf", &code1, &numberunits1, &price1);
    scanf("%d %d %lf", &code2, &numberunits2, &price2);

    amount = (numberunits1*price1)+(numberunits2*price2);

    printf("VALOR A PAGAR: R$ %.2lf\n", amount);
    
    return 0;
}