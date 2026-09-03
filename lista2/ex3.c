#include <stdio.h>
#include <string.h>

void inverter(char *str, int inicio, int fim) {
    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}
void invertePalavras(char *str) {
    int tamanho = strlen(str);
    int inicio = 0;

    for (int i = 0; i <= tamanho; i++) {

        if (str[i] == ' ' || str[i] == '\0') {
            inverter(str, inicio, i - 1);
            inicio = i + 1; 
        }
    }
}

int main() {
    char frase[101];

    if (fgets(frase, sizeof(frase), stdin) != NULL) {
        frase[strcspn(frase, "\n")] = '\0';

        invertePalavras(frase);

        printf("%s\n", frase);
    }

    return 0;
}
