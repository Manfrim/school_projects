#include <stdio.h>

int main() {
    printf("Numeros pares: ");
    for (int i = 1; i <= 25; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\nNumeros impares: ");
    for (int i = 26; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;

    system ("pause");
}
