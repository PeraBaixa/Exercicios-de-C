//Lista de exercicios de matrizes

#include <stdio.h>

void ex5();
void ex8();
void ex12();
void ex16();
void ex20();

int main(){
    int opt;
    char s[] = "Voce selecionou";
    
    do{
        printf("Dentre estas opcoes:\n");
        printf("1 - Soma de colunas (ex. 5)\n");
        printf("2 - Soma de matrizes (ex. 8)\n");
        printf("3 - Diferenca, soma e produto (ex. 20)\n");
        printf("4 - Multiplos de 7 ou de 3 (ex. 26)\n");
        printf("5 - Vetor e valor repetido (ex.30)\n");
        printf("Outro valor - Sair do programa\n");
        
        printf("Escolha qual exercicio deseja testar: ");
        scanf("%d", &opt);
        
        switch (opt){
            case 1:
                printf("%s \"Soma de colunas\"\n\n", s);
                ex5();
                break;
            case 2:
                printf("%s \"Soma de matrizes\"\n\n", s);
                ex8();
                break;
            case 3:
                printf("%s \"Diferenca, soma e produto\"\n\n", s);
                ex12();
                break;
            case 4:
                printf("%s \"Multiplos de 7 ou de 3\"\n\n", s);
                ex16();
                break;
            case 5:
                printf("%s \"Vetor e valor repetido\"\n\n", s);
                ex20();
                break;
            default:
                opt = 0;
        }
        printf("\n\n");
    }while (opt != 0);
}

void ex5(){
    /*Faça um algoritmo que leia uma matriz de 15 X 20 de reais e mostre a soma
      de cada coluna separadamente*/
    
    int L = 15;
    int C = 20;
    float M[L][C], s[C];
    
    for (int i = 0; i < C; i++){
        s[i] = 0.0;
    }
    
    printf("Informe os valores:\n");
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf("*[%d][%d]: ", i, j);
            scanf("%f", &M[i][j]);
            
            s[j] += M[i][j];
        }
    }
    
    printf("\nA matriz ficou:\n");
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf("%f ", M[i][j]);
        }
        printf("\n");
    }
    
    printf("Soma das colunas: ");
    for (int i = 0; i < C; i++){
        printf("%f ", s[i]);
    }
}

void ex8(){
    /*Dadas duas matrizes numéricas A, 5x5, e B, 5x5 criar e imprimir a matriz
      S, soma de A e B*/
    int VAL = 5;
    int A[VAL][VAL], B[VAL][VAL];
    int S[VAL][VAL];
    
    printf("Para a matriz A, informe:\n");
    for (int i = 0; i < VAL; i++){
        for (int j = 0; j < VAL; j++){
            printf("O valor [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Para a matriz B, informe:\n");
    for (int i = 0; i < VAL; i++){
        for (int j = 0; j < VAL; j++){
            printf("O valor [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
            
            S[i][j] = (A[i][j] + B[i][j]);
        }
    }
    
    printf("A soma das matrizes fica:\n");
    for (int i = 0; i < VAL; i++){
        for (int j = 0; j < VAL; j++){
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }
}

void ex12(){
    /*Fazer um algoritmo para receber uma matriz 10x10 e devolve o resultado
      pedido no item:
      a) a soma dos elementos acima da diagonal principal;
      b) a soma dos elementos abaixo da diagonal principal*/
}

void ex16(){}
void ex20(){}
