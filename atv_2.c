#include <stdio.h>


int somarValores(int valores[]){
    int soma = 0;
     for(int i = 0; i < 5; i++){
        soma += valores[i];
    }

    return soma;
}

int main(){

    int numeros[5];
    int numeros_lidos = 0;


    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

printf("A soma eh: %d", somarValores(numeros));
    


}