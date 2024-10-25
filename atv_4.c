#include <stdio.h>

int exibirNumerosPares(int valores[]){
     for(int i = 0; i < 20; i++){
        if(valores[i] % 2 == 0){
            printf("Esse numero eh par: %d\n", valores[i]);
        }
    }

}

int exibirNumerosImpares(int valores[]){
     for(int i = 0; i < 20; i++){
        if(valores[i] % 2 != 0){
            printf("Esse numero eh impar: %d\n", valores[i]);
        }
    }

}

int main(){

    int numeros[20];
    int numeros_lidos = 0;


    for(int i = 0; i < 20; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

    exibirNumerosPares(numeros);
    printf("\n");
    exibirNumerosImpares(numeros);
    


}