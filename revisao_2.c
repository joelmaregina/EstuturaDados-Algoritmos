// 1) Que imprima o horóscopo de varias pessoas, a aprtir da sua data de nascimento (ddmm). O fim é determinado quando se digita 9999 para data. considera que a data foi digitada corretamente.

// 01-20 Capricornio
// 02-19 Aquario
// 03-20 Peixes
// 04-20 Aries
// 05-20 Touro
// 06-20 Gemeos
// 07-21 Cancer
// 08-22 Leão
// 09-22 Virgem
// 10-22 Libra
// 11-21 Escorpião
// 12-21   Sargitario
#include <stdio.h>

int main()
{
    int aniversario, dia, mes;
    
    do{
        printf("Digite seu aniversario DDMM:\n (Digite 9999 para encerrar o programa)) \n");
        scanf("%d", &aniversario);
        
        dia = aniversario / 100;
        mes = aniversario % 100;
        
        switch(mes){
            case 1:{
                if(dia >= 1 && dia <= 20) printf("\n Seu signo é Capricórnio \n");
                if(dia >= 21 && dia <=31) printf("\n Seu signo é Aquário \n");
                break;
            }
            case 2:{
                if(dia >= 1 && dia <=19) printf("\n Seu signo é Aquário \n");
                if(dia >= 20 && dia <= 29) printf("\n Seu signo é Peixes \n");
                break;
            }
            case 3:{
                if(dia >= 1 && dia <= 20) printf("\n Seu signo é Peixes \n");
                if(dia >= 21 && dia <=31) printf("\n Seu signo é Áries \n");
                break;
            }
            case 4:{
                if(dia >= 1 && dia <= 20) printf("\n Seu signo é Áries \n");
                if(dia >= 21 && dia <=30) printf("\n Seu signo é Touro \n");
                break;
            }
            case 5:{
                if(dia >= 1 && dia <= 20) printf("\n Seu signo é Touro \n");
                if(dia >= 21 && dia <=31) printf("\n Seu signo é Gêmeos \n");
                break;
            }
            case 6:{
                if(dia >= 1 && dia <= 20) printf("\n Seu signo é Gêmeos \n");
                if(dia >= 21 && dia <=30) printf("\n Seu signo é Câncer \n");
                break;
            }
            case 7:{
                if(dia >= 1 && dia <= 21) printf("\n Seu signo é Câncer \n");
                if(dia >= 22 && dia <=31) printf("\n Seu signo é Leão \n");
                break;
            }
            case 8:{
                if(dia >= 1 && dia <= 22) printf("\n Seu signo é Leão \n");
                if(dia >= 23 && dia <=31) printf("\n Seu signo é Virgem \n");
                break;
            }
            case 9:{
                if(dia >= 1 && dia <= 22) printf("\n Seu signo é Virgem \n");
                if(dia >= 23 && dia <=30) printf("\n Seu signo é Libra \n");
                break;
            }
            case 10:{
                if(dia >= 1 && dia <= 22) printf("\n Seu signo é Libra \n");
                if(dia >= 23 && dia <=31) printf("\n Seu signo é Escorpião \n");
                break;
            }
            case 11:{
                if(dia >= 1 && dia <= 21) printf("\n Seu signo é Escorpião \n");
                if(dia >= 22 && dia <=30) printf("\n Seu signo é Sagitário \n");
                break;
            }
            case 12:{
                if(dia >= 1 && dia <= 21) printf("\n Seu signo é Sagitário \n");
                if(dia >= 22 && dia <=31) printf("\n Seu signo é Capricórnio \n");
                break;
            }
        }

    }while(aniversario =! 9999);
}

#include <stdio.h>
// 2) Que dado dois vetores de 10 posições, efetue operações basicas aritmeticas, indicadas por um terceiro vetor cujos dados 
// tambem são fornecidos pelo usuario, gerando e imprimindo um quarto vetor.
#define TAM 10
#define OP 4

#include <stdio.h>

int main()
{
   int A [TAM];
   int B [TAM];
   int calculos [OP]={1, 2, 3, 4};
   int resultado [TAM];
   int n, i;

   printf("Digite os valores dentro dos vetores: ");
   
   for (i=0; i<TAM; i++){
       printf("Digite o valor %d: \n",i);
       scanf("%d",&A[i]);
   }
   
   for ( i=0; i<TAM; i++){
       printf("Digite o valor %d: \n",i);
       scanf("%d",&B[i]);
   }
   
   printf("Digite a operacao que voce deseja fazer: \n");
   printf("Opcoes disponiveis: 1 - soma\n, 2 - subtracao\n, 3 - multiplicacao\n 4 - divisao");
   scanf("%d", &n);
   
   for (i=0;i<OP;i++){
       if (n==calculos[i]){
           if (n==1) for (int j=0;j<TAM;j++) resultado [j] = A[j] + B[j];
           if (n==2) for (int j=0;j<TAM;j++) resultado [j] = A[j] - B[j];
           if (n==3) for (int j=0;j<TAM;j++) resultado [j] = A[j] * B[j];
           if (n==4) for (int j=0;j<TAM;j++) resultado [j] = A[j] / B[j];
       }
   }
   
    printf("Os resultados foram: \n");
    for (i = 0 ; i < TAM ; i++) printf("%d  ", resultado[i]);
}

#include <stdio.h>
// 3) Que  entre com dados num vetor VET do tipo inteiro com 20 posiçoes, onde podem existir varios elementos repetidos. 
// Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.

#define TAM 20

int main()
{
    int vet[TAM] = {5, 4, 5, 4, 7, 6, 16, 89, 92, 10, 23, 5, 2, 10, 65, 200, 16, 6, 25, 2018}; // 1 2 4 5 5
     int i, j, l, aux;
     int cont= 0;
   
   // Ordenação do vetor:
    for(i = 0; i < TAM-1; i++){
        for(j = i+1; j < TAM; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    // Imprime o vetor ordenado:
    for(i = 0; i < TAM-cont; i++) printf(" %d ", vet[i]);
    
    // Conta o número de repetições:
    for(i = 0; i < TAM; i++) if(vet[i] == vet[i+1]) cont++;
    // Cria o novo vetor VET2 no tamanho ideal (sem contar as repetições):
    int vet2[TAM - cont];
   
   // Atribui ao novo vetor VET2 os valores não repetidos
    for(i = 0, l = 0; i < TAM; i++){
        if(vet[i] != vet[i+1]){
            vet2[l] = vet[i];
            l++;
        }
    }
    
    printf("\n--------------------------------- \n");
    for(i = 0; i < TAM-cont; i++) printf(" %d ", vet2[i]);
}

#include <stdio.h>
//04. Que leia os elemntos de uma matrix 10x10 e mostre somente os elementos abaixo da diagonal;
#define TAM 10
int main()
{
    int vetor[TAM][TAM] = {{3, 43, 5, 66, 8, 3, 64, 5, 36, 8},
                            {6, 7, 8, 9, 10, 11, 16, 5, 3, 18}, 
                            {1, 55, 2, 77, 9, 1, 5, 226, 7, 91},
                            {1, 2, 11, 2, 1, 1, 25, 17, 29, 12}, 
                            {0, 40, 0, 30, 0, 20, 0, 90, 0, 92},
                            {10, 9, 8, 7, 6, 15, 4, 13, 29, 11},
                            {6, 16, 9, 10, 4, 6, 16, 9, 10, 41},
                            {22, 23, 4, 5, 26, 27, 8, 29, 0, 1}, 
                            {5, 15, 5, 3, 45, 5, 65, 75, 8, 95},
                            {5, 7, 10, 50, 5, 5, 7, 10, 52, 58}};
    int i, j;
    
    for(i = 0; i < TAM ; i++){
        for(j = 0; j < TAM; j++){
            if(i > j) printf(" %d ", vetor[i][j]);
        }    
    }
}

// 6)  Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava.
// da quarta pela decima, a diagonal principal pela diagonal segundaria.
#include <stdio.h>
#define DIM 10
int main()
{
    int matriz[DIM][DIM] = {{3, 43, 5, 66, 8, 3, 64, 5, 36, 8},
                            {6, 7, 8, 9, 10, 11, 16, 5, 3, 18}, //2
                            {1, 55, 2, 77, 9, 1, 5, 226, 7, 91},
                            {1, 2, 11, 2, 1, 1, 25, 17, 29, 12}, // -> 4
                            {0, 40, 0, 30, 0, 20, 0, 90, 0, 92},
                            {10, 9, 8, 7, 6, 15, 4, 13, 29, 11},
                            {6, 16, 9, 10, 4, 6, 16, 9, 10, 41},
                            {22, 23, 4, 5, 26, 27, 8, 29, 0, 1}, //8
                            {5, 15, 5, 3, 45, 5, 65, 75, 8, 95},
                            {5, 7, 10, 50, 5, 5, 7, 10, 52, 58}}; // -> 10
    int i, j;
    int arrayTemp[DIM];
    
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++) printf(" %d ", matriz[i][j]);
        printf("\n");
    }
    printf("------------------------------- \n");
    
    // Trocando as linha 2 pela linha 8 e a linha 4 pela linha 10
    for(i = 0; i < DIM; i++){
        arrayTemp[i] = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = arrayTemp[i];
        arrayTemp[i] = matriz[3][i];
        matriz[3][i] = matriz[9][i];
        matriz[9][i] = arrayTemp[i];
    }
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++) printf(" %d ", matriz[i][j]);
        printf("\n");
    }
    printf("------------------------------- \n");
    
    // Trocando a diagonal principal pela secundária: 
    for(i = 0; i < DIM; i++){
        arrayTemp[i] = matriz[i][i];
        matriz[i][i] = matriz[i][DIM - i - 1];
        matriz[i][DIM - i - 1] = arrayTemp[i];
    }
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++) printf(" %d ", matriz[i][j]);
        printf("\n");
    }

}

#include <stdio.h>
// 7) Que declare uma matriz 5x5 e armazene em um vetor o MAIOR elemento cadastrado em cada COLUNA da matriz,
// e em um vetor b o menor elemento cadastrado em cada coluna da matriz e imprima: a) toda a matrix; b) o vetor a; c) o vetor b; d)(a+b)/2
#define TAM 3
// *******************************INCOMPLETA!!*********************************************
int main()
{
    int vetor[TAM][TAM] = {{9,8,7},
                       {4, 5, 6},
                       {7, 2, 9}};
    int maior[TAM];
    int menor[TAM];
    int menorValor, maiorValor;
    int i,j;

   
    for (i = 0 ; i < TAM ; i++){
        for (j = 0; j < TAM ; j++){
            menorValor = vetor [j][i];
            maiorValor = vetor [j][i];
            if (menorValor > vetor [j][i]){
                menorValor=vetor [j][i];
            }
           
            if (maiorValor < vetor [j][i]){
                maiorValor = vetor [j][i];
            }
        }
         menor [i] = menorValor;
         maior [i] = maiorValor;
    }
   
   
    for (i = 0; i < TAM ; i++) {
        printf("%d\n", maior[i]);
    }
    printf("__________________\n");
   
    for (i = 0; i < TAM ; i++) {
        printf("%d\n", menor[i]);
    }
}
