#include <stdio.h>
#include <math.h>

int main (){

    int a,b,c, maiorAB, maximo; 

    scanf("%d %d %d", &a,&b,&c);

    maiorAB = (a + b + abs(a-b))/2;

    maximo = (maiorAB + c + abs(maiorAB-c))/2;

    printf("%d eh o maior\n", maximo);

    return 0;

}