#include <stdio.h>

int main() {
    char v[10];
    int n[10] = {0};
    char letra;

    printf("Digite 10 letras:\n");

    for (int i = 0; i < 10; i++) {
        scanf(" %c", &v[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (v[i] == v[j]) {
                n[i]++;
            }
        }
    }

    int maior = n[0];
    letra = v[0];

    for (int i = 1; i < 10; i++) {
        if (n[i] > maior) {
            maior = n[i];
            letra = v[i];
        }
    }

    printf("A letra %c aparece %d vezes", letra, maior);
    return 0;
}
