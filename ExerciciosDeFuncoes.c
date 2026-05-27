//Lista de exercicios de função

#include <stdio.h>

//"Mains" de cada exercicio
void ex11();
void ex12();
void ex13();
void ex14();
void ex15();
void ex16();
void ex17();
void ex18();
void ex19();
void ex20();

//Funções usadas para cada exercicio
char retornaConc (float media); //Para o ex. 11
void ordenaVals (int vals[]); //Para o ex. 12
float volEsfera (float r); //Para o ex. 13
void calculaMedia (float notas[], char cod); //Para o ex. 14
int somaN (int N); //Para o ex. 15
float pot (float n, float expo); //Para o ex. 16

int main() {
	int opt;
	char s[] = "Voce selecionou";

	do {
		printf("Dentre estas opcoes:\n");
		printf("1 - Retorna conceito (ex. 11)\n");
		printf("2 - Ordenar valores (ex. 12)\n");
		printf("3 - Calcular o volume de uma esfera (ex. 13)\n");
		printf("4 - Calcular media (ex. 14)\n");
		printf("5 - Somar N numeros (ex. 15)\n");
		printf("6 - Potencializacao (ex. 16)\n");
		printf("7 - Soma de matrizes (ex. 17)\n");
		printf("8 - Acima e abaixo da diagonal principal (ex. 18)\n");
		printf("9 - Multiplicar pelo maior da linha (ex. 19)\n");
		printf("10 - Multiplicar valores pela diagonal (ex.20)\n");
		printf("Outro valor - Sair do programa\n");

		printf("Escolha qual exercicio deseja testar: ");
		scanf("%d", &opt);

		switch (opt) {
    		case 1:
    			printf("%s \"Retorna conceito\"\n\n", s);
    			ex11();
    			break;
    		case 2:
    			printf("%s \"Ordenar valores\"\n\n", s);
    			ex12();
    			break;
    		case 3:
    			printf("%s \"Calcular o volume de uma esfera\"\n\n", s);
    			ex13();
    			break;
    		case 4:
    			printf("%s \"Calcular media\"\n\n", s);
    			ex14();
    			break;
    		case 5:
    			printf("%s \"Somar N numeros\"\n\n", s);
    			ex15();
    			break;
    		case 6:
    			printf("%s \"Potencializacao\"\n\n", s);
    			ex16();
    			break;
    		case 7:
    			printf("%s \"Soma de matrizes\"\n\n", s);
    			ex17();
    			break;
    		case 8:
    			printf("%s \"Acima e abaixo da diagonal principal\"\n\n", s);
    			ex18();
    			break;
    		case 9:
    			printf("%s \"Multiplicar pelo maior da linha\"\n\n", s);
    			ex19();
    			break;
    		case 10:
    			printf("%s \"Multiplicar valores pela diagonal\"\n\n", s);
    			ex20();
    			break;
    		default:
    			opt = 0;
		}
		getchar();
		printf("\n\n");
	} while (opt != 0);
}

void ex11(){
    /*Faça uma função que recebe a média final de um aluno por parâmetro e
      retorna o seu conceito, conforme a tabela abaixo:
        Nota Conceito
        de 0,0 a 4,9 D
        de 5,0 a 6,9 C
        de 7,0 a 8,9 B
        de 9,0 a 10,0 A
    */
    
    float media;
    printf("Informe a média do aluno: ");
    scanf("%f", &media);
    printf("O conceito do aluno é %c", retornaConc(media));
}
char retornaConc(float media){
    char conc = 'D';
    
    if (media >= 5.0 && media < 7.0) {
        conc = 'C';
    }
    else if (media >= 7.0 && media < 9.0) {
        conc = 'B';
    }
    else if (media >= 9.0) {
        conc = 'A';
    }
    
    return conc;
}

void ex12(){
    /*Faça uma procedure que recebe 3 valores inteiros por parâmetro e
      retorna-os ordenados em ordem crescente*/
    
    int vals[] = {0, 0, 0};
    printf("Informe o primeiro valor: ");
    scanf("%i", &vals[0]);
    printf("Informe o segundo valor: ");
    scanf("%i", &vals[1]);
    printf("Informe o terceiro valor: ");
    scanf("%i", &vals[2]);
    ordenaVals(vals);
    
    printf("Os valores, agora ordenados: %i - %i - %i", vals[0], vals[1], vals[2]);
}
void ordenaVals(int vals[]){
    int aux;
    
    if (vals[0] >= vals[1] && vals[0] >= vals[2]) {
        if (vals[2] > vals[1]){
            aux = vals[1];
            vals[1] = vals[2];
            vals[2] = aux;
        }
    }
    else if (vals[1] >= vals[0] && vals[1] >= vals[2]) {
        aux = vals[0];
        vals[0] = vals[1];
        vals[1] = aux;
        if (vals[2] >= vals[1]){
            vals[1] = vals[2];
            vals[2] = aux;
        }
    }
    else {
        aux = vals[0];
        vals[0] = vals[2];
        vals[2] = aux;
        if (vals[2] >= vals[1]){
            vals[2] = vals[1];
            vals[1] = aux;
        }
    }
}

void ex13(){
    /*
      Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o 
      seu volume (v = 4/3.π .R3)
    */
    
    float raio;
    printf("Informe o raio (cm) da esfera: ");
    scanf("%f", &raio);
    printf("O volume da esfera é %.2f centimetros cubicos", volEsfera(raio));
}
float volEsfera(float r){
    float PI = 3.14;
    
    return (4.0/3.0*PI*(r*r*r));
}

void ex14(){
    /*
      Desenvolva uma procedure que recebe as 3 notas de um aluno por parâmetro 
      e uma letra. Se a letra for A a procedure calcula a média aritmética das
      notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2
      respectivamente) e se for H, a sua média harmônica. A média calculada
      também deve retornar por parâmetro. As médias são obtidas através das
      fórmulas:
        MA = (n1+n2+n3) / 3
        MP = (5*n1 + 3*n2 + 2*n3) / 5+3+2
        MH = 3 / (1/n1 + 1/n2 + 1/n3)
    */
    
    float notas[] = {0.0, 0.0, 0.0, 0.0}; //O quarto valor é a média
    char cod;
    printf("Informe a primeira nota: "); scanf("%f", &notas[0]);
    printf("Informe a segunda nota: "); scanf("%f", &notas[1]);
    printf("Informe a terceira nota: "); scanf("%f", &notas[2]);
    printf("Informe o tipo de média: "); scanf("%s", &cod);
    calculaMedia(notas, cod);
    printf("A média das notas é %f", notas[3]);
}
void calculaMedia(float notas[], char cod){
    switch (cod) {
        case 'A':
            notas[3] = ((notas[0] + notas[1] + notas[2]) / 3.0);
            break;
        case 'P':
            notas[3] = ((5.0*notas[0] + 3.0*notas[1] + 2.0*notas[2]) / 10.0);
            break;
        default:
            notas[3] = (3.0 / (1.0/notas[0] + 1.0/notas[1] + 1.0/notas[2]));
    }
}

void ex15(){
    /*
       Elaborar um algoritmo que possua uma função que efetue e permita
       apresentar o total do somatório dos N primeiro número inteiro, definidos
       por um operador. (1+2+3+4+5+6+7+...+N)
    */
    
    int N;
    printf("Informe o valor de N: "); scanf("%i", &N);
    printf("A soma dos N primeiro numero inteiro é %i", somaN(N));
}
int somaN(int N){
    int soma = 0;
    
    for (int i = 1; i <= N; i++){
        soma += i;
    }
    
    return soma;
}

void ex16(){
    /*
      Desenvolva um algoritmo que crie uma função para calcular o valor de uma
      potência de um número qualquer. Ou seja, ao informar para a função o
      número e sua potência deverá ser apresentado o resultado.
    */
    
    float n;
    int expo;
    
    printf("Informe a base da operação: "); scanf("%f", &n);
    printf("Informe o expoente da operação: "); scanf("%i", &expo);
    printf("O resultado da potencialização é %f", pot(n, expo));
}
float pot(float n, float expo){
    float pot = 1.0;
    
    for (int i = 0; i < expo; i++){
        pot *= n;
    }
    
    return pot;
}

void ex17(){}
void ex18(){}
void ex19(){}
void ex20(){}
