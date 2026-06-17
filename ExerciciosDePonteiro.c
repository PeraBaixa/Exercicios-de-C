/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void calc_esfera (float r, float* area, float* volume);
void media_pond (float n1, float p1, float n2, float p2, float *media);

const float PI = 3.14;
int main(){
    
	int opt;
	char s[] = "Voce selecionou";

	do {
		printf("Dentre estas opcoes:\n");
		printf("1 - Area e volume de esfera\n");
		printf("2 - Media ponderada (ex. 12)\n");
		printf("3 - Calcular o volume de uma esfera (ex. 13)\n");
		printf("4 - Calcular media (ex. 14)\n");
		printf("Outro valor - Sair do programa\n");

		printf("Escolha qual exercicio deseja testar: ");
		scanf("%d", &opt);

		switch (opt) {
    		case 1:
    			float area, volume, r;
    			printf("%s \"Area e volume de esfera\"\n\n", s);
    			printf("Informe o valor do raio: ");
    			scanf("%f", &r);
    			calc_esfera(r, &area, &volume);
    			printf("* Area: %.2f\n", area);
    			printf("* Volume: %.2f", volume);
    			
    			break;
    		case 2:
    			float n[2], p[2], m;
    			printf("%s \"Media ponderada\"\n\n", s);
    			
    			for (int i = 0; i < 2; i++){
    			    printf("Informe a nota %i: ", (i + 1));
    			    scanf("%.2f", &n[i]);
    			    printf("Agora o seu valor: ");
    			    scanf("%.2f", &p[i]);
    			}
    			media_pond(n[0], p[0], n[1], p[1], &m);
    			printf("A media final do aluno eh %f", m);
    			
    			break;
    		case 3:
    			printf("%s \"Calcular o volume de uma esfera\"\n\n", s);
    			
    			break;
    		case 4:
    			printf("%s \"Calcular media\"\n\n", s);
    			
    			break;
    		default:
    			opt = 0;
		}
		getchar();
		printf("\n\n");
	} while (opt != 0);
}

void calc_esfera(float r, float* area, float* volume){
    // As fórmulas no exercício não tinham a constante PI, mas
    // eu pesquisei e descobri que elas tinham, então coloquei
    // no código
    *area = (4 * PI * (r * r));
    *volume = (4 * PI * (r * r * r))/3;
}

void media_pond(float n1, float p1, float n2, float p2, float *media){
    float total = p1 + p2;
    *media = (n1 * (p1/total) + n2 * (p2/total))/total;
}
