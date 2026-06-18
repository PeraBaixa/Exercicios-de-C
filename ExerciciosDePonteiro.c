#include <stdio.h>

void calc_esfera (float r, float* area, float* volume);
void media_pond (float n1, float p1, float n2, float p2, float *media);
void soma_prod (int a, int b, int *s, int *p);

const float PI = 3.14;
int main(){
    //Para o ex. 1
    float area, volume, r;
    //Para o ex. 2
	float n[2], p[2], m;
	//Para o ex. 3
	int a, b, s_, p_;
    
	int opt;
	char s[] = "Voce selecionou";

	do {
		printf("Dentre estas opcoes:\n");
		printf("1 - Area e volume de esfera\n");
		printf("2 - Media ponderada\n");
		printf("3 - Soma e produto\n");
		printf("4 - Calcular media (ex. 14)\n");
		printf("Outro valor - Sair do programa\n");

		printf("Escolha qual exercicio deseja testar: ");
		scanf("%d", &opt);

		switch (opt) {
    		case 1:
    			printf("%s \"Area e volume de esfera\"\n\n", s);
    			printf("Informe o valor do raio: ");
    			scanf("%f", &r);
    			calc_esfera(r, &area, &volume);
    			printf("* Area: %.2f\n", area);
    			printf("* Volume: %.2f", volume);
    			
    			break;
    		case 2:
    			printf("%s \"Media ponderada\"\n\n", s);
    			
    			for (int i = 0; i < 2; i++){
    			    printf("Informe a nota %i: ", (i + 1));
    			    scanf("%f", &n[i]);
    			    printf("Agora o seu valor: ");
    			    scanf("%f", &p[i]);
    			}
    			//printf("%")
    			media_pond(n[0], p[0], n[1], p[1], &m);
    			printf("A media final do aluno eh %.2f", m);
    			
    			break;
    		case 3:
    			printf("%s \"Soma e produto\"\n\n", s);
    			
    			printf("Informe o primeiro valor: "); scanf("%i", &a);
    			printf("Informe o segundo valor: "); scanf("%i", &b);
    			soma_prod(a, b, &s_, &p_);
    			printf("%i + %i: %i | %i * %i: %i", a, b, s_, a, b, p_);
    			
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
    *media = (n1 * p1 + n2 * p2)/total;
}

void soma_prod (int a, int b, int *s, int *p){
    *s = a + b;
    *p = a * b;
}
