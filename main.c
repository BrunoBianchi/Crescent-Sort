#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimirVetor(int *vetor,int tamanho) {
    for(int x = 0;x<tamanho;x++) { 
        printf("%d \t",vetor[x]);
    }
}

// 4 10 1 5

void sortVetor(int *vetor,int tamanho) {
    int y = 0;
    y = tamanho - 1;
    // Primeira Comparacao Arrumar o maior numero e segundo menor numero
    for(int x = 0;x<tamanho;x++) {
        for(int y = 0; y < tamanho; y++) {
            if(vetor[x] < vetor[y]) {
                int aux = 0;
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux; 
            }
        }
        }

         imprimirVetor(vetor,tamanho);
}



int* criarVetor(int tamanho) {
    int *vetor;
    vetor =  (int*) malloc(tamanho * sizeof(int));
    return vetor;

}

int main() {
int tamanho = 0;
printf("Qual tamanho Deseja ?\n");
scanf("%d",&tamanho);
int *vetor;
vetor = criarVetor(tamanho);
for(int i = 0; i< tamanho;i++) {
    printf("Valor para %d ?\n",i);
    scanf("%d",&vetor[i]);
}
 sortVetor(vetor,tamanho);


}