

#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ double quadrado, cubo, numesoli;
	printf("Digite um numero: \n");
	scanf("%lf",&numesoli);

quadrado = pow(numesoli, 2);
	cubo = pow(numesoli, 3);
	
	printf("numero\tquadrado\tcubo \n");
	printf("%0.lf\t%0.lf\t\t%0.lf", numesoli, quadrado, cubo);
	return 0;
}

