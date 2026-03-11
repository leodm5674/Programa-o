


#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ double numero, result, arre1, arre2;
	printf("Digite um numero real: \n");
	scanf("%lf",&numero);
	result = numero / 2;
	arre1 = floor(result);
	arre2 = ceil(result);
	
	printf("numero\tarredodamento para baixo\t\tarredodamento para cima \n");
	printf("%.2lf\t%.2lf\t%.2lf", result, arre1, arre2); 
	
	return 0;
}

