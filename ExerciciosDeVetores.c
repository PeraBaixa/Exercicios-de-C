//Exercicios 6, 13, 20
#include <stdio.h>

void exercicio6();
void exercicio13();
void exercicio20();
void exercicio26();
void exercicio30();

int main(){   int opt;
    char s[] = "Voce selecionou";
    
    do{
        printf("Dentre estas opcoes:\n");
        printf("1 - Multiplicacao de vetores (ex. 6)\n");
        printf("2 - Vetor par e vetor impar (ex. 13)\n");
        printf("3 - Diferenca, soma e produto (ex. 20)\n");
        printf("4 - Multiplos de 7 ou de 3 (ex. 26)\n");
        printf("5 - Vetor e valor repetido (ex.30)\n");
        printf("Outro valor - Sair do programa\n");
        
        printf("Escolha qual exercicio deseja testar: ");
        scanf("%d", &opt);
        
        switch (opt){
            case 1:
                printf("%s \"Multiplicacao de vetores\"\n\n", s);
                exercicio6();
                break;
            case 2:
                printf("%s \"Vetor par e vetor impar\"\n\n", s);
                exercicio13();
                break;
            case 3:
                printf("%s \"Diferenca, soma e produto\"\n\n", s);
                exercicio20();
                break;
            case 4:
                printf("%s \"Multiplos de 7 ou de 3\"\n\n", s);
                exercicio26();
                break;
            case 5:
                printf("%s \"Vetor e valor repetido\"\n\n", s);
                exercicio30();
                break;
            default:
                opt = 0;
        }
        printf("\n");
    }while (opt != 0);
}

//EX. 6
void exercicio6(){
    /*Escreva um algoritmo que leia dois vetores de 10 posições e faça a 
      multiplicação dos elementos de mesmo índice, colocando o resultado em um 
      terceiro vetor. Mostre o vetor resultante.*/
    
    int vet1[10];
    int vet2[10];
    int vetMult[10];
    
    printf("Sobre o primiro vetor:\n");
    for(int i = 0; i < 10; i++){
        printf("*Valor %d: ", (i+1));
        scanf("%d", &vet1[i]);
    }
    
    printf("\nSobre o segundo vetor:\n");
    for(int i = 0; i < 10; i++){
        printf("*Valor %d: ", (i+1));
        scanf("%d", &vet2[i]);
        
        vetMult[i] = vet1[i]*vet2[i];
    }
    
    printf("\nVetor com os elementos multiplicados:\n[ ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetMult[i]);
    }
    printf("]\n");
}

//EX. 13
void exercicio13(){
    /*Escreva um algoritmo que leia diversos números inteiros fornecidos
      pelo usuário. Distribua esses valores entre dois vetores; o vetor 
      dos ímpares e o vetor dos pares. Cada um terá tamanho 10. O término
      do algoritmo se dará quando o usuário digitar zero ou um dos vetores
      for totalmente preenchido. Mostre os dois vetores no final*/
    
    int vetPar[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int vetImpar[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int contPar, contImpar;
    int val = -1;
    
    contPar = contImpar = 0;
    
    while (val != 0 || contPar == 10 || contImpar == 10){
        printf("Informe um valor diferente de 0: ");
        scanf("%d", &val);
        
        if (val != 0){
            if (val % 2 == 0){
                vetPar[contPar] = val;
                contPar ++;
            }
            else {
                vetImpar[contImpar] = val;
                contImpar ++;
            }
        }
    }
    
    printf("Vetor com pares: [ ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetPar[i]);
    }
    printf("]\n");
    
    printf("Vetor com impares: [ ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetImpar[i]);
    }
    printf("]\n");
}

//EX. 20
void exercicio20(){
    /*Escrever um algoritmo que lê 2 vetores X(10) e Y(10) e os escreve.
      Crie, a seguir, um vetor Z que seja:
        a) a diferença entre X e Y (nos mesmos índices);
        b) soma entre X e Y (nos mesmos índices);
        c) o produto entre X e Y (nos mesmos índices);
      Escreva o vetor Z a cada cálculo*/
    int TAM = 3;
    int X[TAM], Y[TAM], Z[3][TAM];
    
    for (int i = 0; i < TAM; i++){
        printf("Informe o valor %d para X: ", (i+1));
        scanf("%d", &X[i]);
        printf("Agora, para Y: ");
        scanf("%d", &Y[i]);
        printf("\n");
        
        Z[0][i] = X[i] - Y[i];
        Z[1][i] = X[i] + Y[i];
        Z[2][i] = X[i] * Y[i];
    }
    
    printf("Vetor X: [");
    for (int i = 0; i < TAM; i++){
        printf(" %d", X[i]);
    }
    printf(" ]\n");
    
    printf("Vetor Y: [");
    for (int i = 0; i < TAM; i++){
        printf(" %d", Y[i]);
    }
    printf(" ]\n");
    
    printf("Diferencas entre os elementos: [");
    for (int i = 0; i < TAM; i++){
        printf(" %d", Z[0][i]);
    }
    printf(" ]\n");
    
    printf("Somas entre os elementos: [");
    for (int i = 0; i < TAM; i++){
        printf(" %d", Z[1][i]);
    }
    printf(" ]\n");
    
    printf("Produtos entre os elementos: [");
    for (int i = 0; i < TAM; i++){
        printf(" %d", Z[2][i]);
    }
    printf(" ]\n");
}

//EX. 26
void exercicio26(){
    /*Faça um algoritmo que leia um vetor (X) de 500 elementos inteiros. 
      A seguir, divida os seus elementos em outros dois vetores: o primeiro
      contendo os elementos de X múltiplos de 7 e o 3 segundo contendo os
      elementos de X múltiplos de 3. O algoritmo não deve permitir que nos
      dois vetores apareçam espaços vazios. Ao final, mostre os dois vetores
      resultantes*/
      
    int TAM = 500;
    int X[TAM], sete[TAM], tres[TAM];
    int contSete, contTres;
    contSete = contTres = 0;
    
    for (int i = 0; i < TAM; i++){
        printf("Informe o valor %d: ", (i+1));
        scanf("%d", &X[i]);
        
        if (X[i] % 7 == 0) {
            sete[contSete] = X[i];
            contSete ++;
        }
        
        if (X[i] % 3 == 0) {
            tres[contTres] = X[i];
            contTres ++;
        }
    }
    
    sete[contSete] = tres[contTres] = 1;// '1' serve como flag para sair do vetor
    
    printf("Os multiplos de 7: [ ");
    for (int i = 0; i < TAM; i++){
        if (sete[i] == 1){ break; }
        
        printf("%d ", sete[i]);
    }
    printf("]\n");
    
    printf("Os multiplos de 3: [ ");
    for (int i = 0; i < TAM; i++){
        if (tres[i] == 1){ break; }
        
        printf("%d ", tres[i]);
    }
    printf("]\n");
}

//EX. 30
void exercicio30(){
    /*Faça um algoritmo que leia um vetor de 100 posições e uma variável
      identificadora do tipo numérica inteira. Retorne como resposta a
      quantidade de vezes que este número aparece no vetor, e o percentual de
      vezes que aparece em relação ao vetor.*/
    int TAM = 10;
    int vet[TAM];
    int val;
    int num = 0;
      
    printf("Sobre o vetor,\n");
    for(int i = 0; i < TAM; i++){
        printf("Informe o valor %d: ", (i+1));
        scanf("%d", &vet[i]);
    }
    printf("Agora, informe o valor a ser buscado: ");
    scanf("%d", &val);
    
    for(int i = 0; i < TAM; i++){
        if (vet[i] == val){
            num++;
        }
    }
    
    printf("O valor %d aparece %d vezes, ocupando %d por cento do vetor", val, num, ((100*num)/TAM));
}
