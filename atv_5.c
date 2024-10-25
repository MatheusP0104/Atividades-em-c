#include <stdio.h>

int exibirMaiorNumero(int valores[]){
     int maior = 0;

     for(int i = 0; i < 15; i++){
        if(valores[i] > maior){
            maior = valores[i];
        }
    }
    return maior;
}

int exibirMenorNumero(int valores[]){
    int menor = valores[0];

     for(int i = 0; i < 15; i++){
        if(valores[i] < menor){
            menor = valores[i];
        }
    }

    return menor;

}

int main(){

    int numeros[15];
    int numeros_lidos = 0;


    for(int i = 0; i < 15; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

    printf("Esse eh o maior numero: %d\n", exibirMaiorNumero(numeros));
    printf("Esse eh o menor numero: %d", exibirMenorNumero(numeros));



}