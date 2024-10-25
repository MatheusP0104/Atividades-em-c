#include <stdio.h>

int InverterVetor(int valores[]){
    for(int i = 19; i >= 0; i--){
        printf("%d  ", valores[i]);
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

    
    InverterVetor(numeros);
   
    


}