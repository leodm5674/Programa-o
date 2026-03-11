
#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ double raiz, numero;
	printf("Digite o numero que deseja calcular a raiz: \n");
	scanf("%lf", &numero);

raiz = 	sqrt(numero);
	printf("Resultado da raiz será de: %.2lf\n", raiz);
	
	return 0;
}

