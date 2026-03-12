
#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ double a, b, c, d, mediahar, mediaqua,quadrado;
	printf("Digite 4 numeros: ");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	quadrado = pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2); 
	
	mediahar = 4 / ((1/a)+(1/b)+(1/c)+(1/d));
	mediaqua =  sqrt(quadrado / 4);
	
     printf("O resultado da media harmônica: %.2lf \n", mediahar);
     printf("O resultado da media quadráditica: %.2lf", mediaqua);
	return 0;
}

