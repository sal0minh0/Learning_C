#include <stdio.h>

int main(){
    int N, cem, cinquenta, vinte, dez, cinco, dois, um;

    scanf("%d", &N);

    cem = N / 100;

    N %= 100;

    cinquenta = N / 50;

    N %= 50;

    vinte = N / 20;

    N %= 20;

    dez = N / 10;

    N %= 10;

    cinco = N / 5;

    N %= 5;

    dois = N / 2;

    um = N % 2;

    int valorTotal = cem * 100 + cinquenta * 50 + vinte * 20 + dez * 10 + cinco * 5 + dois * 2 + um;

    printf("%d\n", valorTotal);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}