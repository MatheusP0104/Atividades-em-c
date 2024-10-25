#include <stdio.h>

int exibirNumeroVetor(int valores[]){
    int num_digitado = 0;
    printf("Digite um numero para saber se existe no vetor:");
    scanf("%d", &num_digitado);
     for(int i = 0; i < 12; i++){
        if(valores[i] == num_digitado){
           printf("Esse numero existe no vetor e sua posicao eh:%d\n", i);
        }else{

            printf("-1\n");
        }
    }
}


int main(){

    int numeros[12];
    int numeros_lidos = 0;


    for(int i = 0; i < 12; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

    exibirNumeroVetor(numeros);

    


}