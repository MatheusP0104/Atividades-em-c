#include <stdio.h>
#include <math.h>

float CalcularMedia(float valores[], int tamanho_vetor){
    float media = 0.0;

    for(int i = 0; i < tamanho_vetor; i++){
        media += valores[i];
    }

    return media / tamanho_vetor;
}

float CalcularDesvioPadrao(float valores[], int tamanho_vetor, float Valor_media){
   float somaDesviosQuadrados = 0.0;

   for(int i = 0; i < tamanho_vetor; i++){
    somaDesviosQuadrados += pow(valores[i] - Valor_media, 2);
   }

   return sqrt(somaDesviosQuadrados / tamanho_vetor);
}


int main() {
    float numeros[10];
    float numeros_lidos = 0;

   
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numeros_lidos);
        numeros[i] = numeros_lidos;
    }

    float media = CalcularMedia(numeros, 10);

    float desvioPadrao = CalcularDesvioPadrao(numeros, 10, media);
    printf("Desvio Padrao: %.2f\n", desvioPadrao);


}
