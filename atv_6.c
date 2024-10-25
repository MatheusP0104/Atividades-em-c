#include <stdio.h>

int exibirNumerosPositivos(int valores[]){
    int num_positivo = 0;
     for(int i = 0; i < 10; i++){
        if(valores[i] >= num_positivo){
           printf("Esse eh um numero positivo: %d\n", valores[i]);
        }
    }
    return num_positivo;
}

int exibirNumerosNegativos(int valores[]){
    int num_negativo = 0;

     for(int i = 0; i < 10; i++){
        if(valores[i] < num_negativo){
            printf("Esse eh um numero negativo: %d\n", valores[i]);
        }
    }

    return num_negativo;

}

int main(){

    int numeros[10];
    int numeros_lidos = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

    exibirNumerosPositivos(numeros);
    printf("\n");
    exibirNumerosNegativos(numeros);



}