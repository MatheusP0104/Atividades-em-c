#include <stdio.h>

int CalcularProduto(int valores[]){
    int produto = 1;
    for(int i = 0; i < 6; i++){
        produto = produto * valores[i];
    }

    return produto;
}


int main(){

    int numeros[6];
    int numeros_lidos = 0;


    for(int i = 0; i < 6; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

    
    printf("O resultado da multiplicacao eh: %d", CalcularProduto(numeros));
    


}