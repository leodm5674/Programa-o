

#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ double valordacompra, pres1, pres2, pres3, pres4, pres5;
	printf("Digite o valor da compra: ");
	scanf("%lf", &valordacompra);
	
	pres1 = valordacompra * 1;
	pres2 = valordacompra * 2;
	pres3 = valordacompra * 3;
	pres4 = valordacompra * 4;
	pres5 = valordacompra * 5;
	
	printf("Compra parcelada: %.2lf %.2lf %.2lf %.2lf %.2lf", pres1, pres2, pres3, pres4, pres5);
	
	return 0;
}

