#include <stdio.h>

int RotacionarVetor(int valores[], int tamanho){
    int ultimo_valor = valores[tamanho - 1];

    for(int i = tamanho - 1; i > 0; i--){
        valores[i] = valores[i - 1];
    }

    valores[0] = ultimo_valor;

}


int main(){

    int numeros[12];
    int numeros_lidos = 0;


    for(int i = 0; i < 12; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;

    }

    
    RotacionarVetor(numeros, 12);

    for(int i = 0; i < 12; i++){
        printf("%d ", numeros[i]);
    }
   
    


}