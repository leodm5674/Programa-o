

#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{ int valorinteiro, somadosinteiros, milhar, centenas, dezen, uni; 
	 
	printf("Digite numeros positivos: \n");
	scanf("%d",&valorinteiro);
	
    milhar = valorinteiro / 1000;
  
	printf("%d\n", milhar);
		
centenas = valorinteiro % 1000;
 centenas = centenas / 100;
  
	printf("%d", centenas);
	return 0;
}

