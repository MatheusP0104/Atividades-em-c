#include <stdio.h>

int CalcularMedia(int valores[], int tamanho){
    int media = 0;
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += valores[i];
    }

    media = soma / tamanho;
    
    printf("Media: %d\n", media);

    for(int i = 0; i < tamanho; i++){
        if(valores[i] > media){
            printf("Esse numero eh maior que a media: %d\n", valores[i]);
        }
    }

}


int main(){

    int numeros[15];
    int numeros_lidos = 0;


    for(int i = 0; i < 15; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;

    }

    
    CalcularMedia(numeros, 15);
   
    


}