


#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)

{ double  media;
	int valor1, valor2,  valor3;
	printf("Digite 3 numeros \n");
	scanf("%d %d %d", &valor1, &valor2, &valor3);
	
	media = (double) (valor1 + valor2 + valor3) / 3;
	 
	 printf("O resultado será de: %lf \n", media);
	
	
	return 0;
}

