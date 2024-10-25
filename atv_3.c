#include <stdio.h>


int media_dos_Valores(int valores[]){
    int media = 0;
    int soma = 0;
     for(int i = 0; i < 8; i++){
        soma += valores[i];

        media = soma / 8;
    }

    return media;
}

int main(){

    int numeros[8];
    int numeros_lidos = 0;


    for(int i = 0; i < 8; i++){
        printf("Digite um numero: ", i);
        scanf("%d", &numeros_lidos);

        numeros[i] = numeros_lidos;
    }

printf("A media eh: %d", media_dos_Valores(numeros));
    


}