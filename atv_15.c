#include <stdio.h>

int SomarVetores(int valores1[],int valores2[],int resultado[],int tamanho){
   for(int i = 0; i < tamanho; i++){
    resultado[i] = valores1[i] + valores2[i]; 
   }

}


int main(){

    int numeros1[10], numeros2[10], vetor_resultado[10];
    int numeros_lidos = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite um numero do primeiro vetor: ", i);
        scanf("%d", &numeros_lidos);

        numeros1[i] = numeros_lidos;

    }

    printf("==================================\n");
        
      for(int i = 0; i < 10; i++){
        printf("Digite um numero do segundo vetor: ", i);
        scanf("%d", &numeros_lidos);

        numeros2[i] = numeros_lidos;

    }


    SomarVetores(numeros1, numeros2, vetor_resultado, 10);

    printf("Vetor resultante da soma:\n");
    for(int i = 0; i < 10; i++){
        printf("%d  ", vetor_resultado[i]);
    }
   
    


}