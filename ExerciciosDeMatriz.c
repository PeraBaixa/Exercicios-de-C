//Lista de exercicios de matrizes

#include <stdio.h>

void ex5();
void ex8();
void ex12();
void ex17();
void ex20();

int main() {
	int opt;
	char s[] = "Voce selecionou";

	do {
		printf("Dentre estas opcoes:\n");
		printf("1 - Soma de colunas (ex. 5)\n");
		printf("2 - Soma de matrizes (ex. 8)\n");
		printf("3 - Acima e abaixo da diagonal principal (ex. 12)\n");
		printf("4 - Multiplicar pelo maior da linha (ex. 17)\n");
		printf("5 - Multiplicar valores pela diagonal (ex.20)\n");
		printf("Outro valor - Sair do programa\n");

		printf("Escolha qual exercicio deseja testar: ");
		scanf("%d", &opt);

		switch (opt) {
		case 1:
			printf("%s \"Soma de colunas\"\n\n", s);
			ex5();
			break;
		case 2:
			printf("%s \"Soma de matrizes\"\n\n", s);
			ex8();
			break;
		case 3:
			printf("%s \"Acima e abaixo da diagonal principal\"\n\n", s);
			ex12();
			break;
		case 4:
			printf("%s \"Multiplicar pelo maior da linha\"\n\n", s);
			ex17();
			break;
		case 5:
			printf("%s \"Multiplicar valores pela diagonal\"\n\n", s);
			ex20();
			break;
		default:
			opt = 0;
		}
		printf("\n\n");
	} while (opt != 0);
}

void ex5() {
	/*Faça um algoritmo que leia uma matriz de 15 X 20 de reais e mostre a soma
	  de cada coluna separadamente*/

	int L = 15;
	int C = 20;
	float M[L][C], s[C];

	for (int i = 0; i < C; i++) {
		s[i] = 0.0;
	}

	printf("Informe os valores:\n");
	for (int i = 0; i < L; i++) {
		for (int j = 0; j < C; j++) {
			printf("*[%d][%d]: ", i, j);
			scanf("%f", &M[i][j]);

			s[j] += M[i][j];
		}
	}

	printf("\nA matriz ficou:\n");
	for (int i = 0; i < L; i++) {
		for (int j = 0; j < C; j++) {
			printf("%f ", M[i][j]);
		}
		printf("\n");
	}

	printf("Soma das colunas: ");
	for (int i = 0; i < C; i++) {
		printf("%f ", s[i]);
	}
}

void ex8() {
	/*Dadas duas matrizes numéricas A, 5x5, e B, 5x5 criar e imprimir a matriz
	  S, soma de A e B*/
	int VAL = 5;
	int A[VAL][VAL], B[VAL][VAL];
	int S[VAL][VAL];

	printf("Para a matriz A, informe:\n");
	for (int i = 0; i < VAL; i++) {
		for (int j = 0; j < VAL; j++) {
			printf("O valor [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("Para a matriz B, informe:\n");
	for (int i = 0; i < VAL; i++) {
		for (int j = 0; j < VAL; j++) {
			printf("O valor [%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);

			S[i][j] = (A[i][j] + B[i][j]);
		}
	}

	printf("A soma das matrizes fica:\n");
	for (int i = 0; i < VAL; i++) {
		for (int j = 0; j < VAL; j++) {
			printf("%d ", S[i][j]);
		}
		printf("\n");
	}
}

void ex12() {
	/*Fazer um algoritmo para receber uma matriz 10x10 e devolve o resultado
	  pedido no item:
	  a) a soma dos elementos acima da diagonal principal;
	  b) a soma dos elementos abaixo da diagonal principal*/

	int TAM = 30;
	int mat[TAM][TAM];
	int cima = 0;
    int baixo = 0;
    
    printf("Sobre a matriz, informe:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("O valor [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            
            if (i != j){
                if (i < j){
                    cima += mat[i][j];
                }
                else {
                    baixo += mat[i][j];
                }
            }
        }
        
    }
    
    printf("Soma dos itens sobre a diagonal principal: %d\n", cima);
    printf("Soma dos itens abaixo da diagonal principal: %d", baixo);
}

void ex17() {
    /*Escrever um algoritmo que lê uma matriz M(12,13) e divida todos os 13
      elementos de cada uma das 12 linhas de M pelo maior elemento em módulo
      daquela linha. Escrever a matriz lida e a modificada.*/
      
    int L = 12, C = 13;
    int M[L][C], maior[L], val;
     
    printf("\nSobre a matriz M, informe:\n");
    for (int i = 0; i < L; i++){
        maior[i] = 0;
        val = 0;
        
        for (int j = 0; j < C; j++){
            printf("\tO valor [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            val = M[i][j]; 
            
            if (val < 0){ val *= -1; }
            if (val > maior[i]){ maior[i] = val; }
        }
    }
    
    printf("\nMatriz lida:\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("- %d ", M[i][j]);
        }
        printf("-\n");
    }
    
    printf("\nMatriz modificada:\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("- %d ", (M[i][j]*maior[i]));
        }
        printf("-\n");
    }
}

void ex20() {
    /*Faça um algoritmo que leia uma matriz 50x50 de números reais. A seguir,
      multiplique cada linha pelo elemento da diagonal principal daquela linha.
      Mostre a matriz após as multiplicações.*/
      
    int TAM = 3;
    float M[TAM][TAM];
    
    printf("Sobre a matriz, informe:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("\tValor[%d][%d]: ", i, j);
            scanf("%f", &M[i][j]);
        }
    }

    printf("A matriz informada:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("| %f ", M[i][j]);
        }
        printf("|\n");
    }
    
    printf("A matriz modificada:\n");
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("| %f ", (M[i][j]*M[i][i]));
        }
        printf("|\n");
    }
}
