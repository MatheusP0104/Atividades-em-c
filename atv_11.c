#include <stdio.h>

int InverterVetor(int valores[], int tamanho){
    int novo_tamanho = tamanho;

    for (int i = 0; i < novo_tamanho; i++) {
        for (int j = i + 1; j < novo_tamanho;) {
            if (valores[j] == valores[i]) {
                for (int k = j; k < novo_tamanho - 1; k++) {
                    valores[k] = valores[k + 1];
                }
                novo_tamanho--;  
            } else {
                j++;  
            }
        }
    }
    return novo_tamanho; 
}

int main() {
    int numeros[15];
    int numeros_lidos = 0;


    for (int i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros_lidos);
        numeros[i] = numeros_lidos;
    }

    int novo_tamanho = InverterVetor(numeros, 15);

    printf("Vetor sem numeros repetidos:\n");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

}
