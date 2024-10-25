#include <stdio.h>

void exibirVetorOrdenado(int valores[]){
    int i,k,j;
     for(i = 0; i < 10; i++){
        printf("\n[%d] ", i);

        for(j = 0; j < 10 ; j++){
             printf("%d, ", valores[j]);

             if(valores[j] > valores[j + 1]){
                k = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = k;
             }
        }
    }
}


int main(){

    int numeros[10];
    int numeros_lidos = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

    exibirVetorOrdenado(numeros);

    


}