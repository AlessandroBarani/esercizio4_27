
#include <stdio.h>
int main() {
    int n;
    int i;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    printf("La scomposizione in fattori primi di %d e': ", n);
    for (i = 2; n > 1; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    return 0;
}