#include <stdio.h>

int main(){

    int numeros[10];
    int numeros_lidos = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

     for(int i = 0; i < 10; i++){
        printf("%d  ", numeros[i]);
    }


}