#include <stdio.h>

int main() {
    double numero = 9.26;

    // Multiplica por 100 e arredonda para obter a parte decimal
    int parte_decimal = (int)((numero - (int)numero + 0.005) * 100);

    printf("A parte decimal do numero %.2lf eh: %d\n", numero, parte_decimal);

    return 0;
}
