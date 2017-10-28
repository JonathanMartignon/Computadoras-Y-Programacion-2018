#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int var1=5;
	int var2=2;
	int resultado=0;
	
	//Igual a ?
	resultado=var1 == var2;
	printf("%d==%d=%d\n",var1,var2,resultado);
	
	//Menor igual que ?
	resultado=var1 <= var2;
	printf("%d <= %d=%d\n",var1,var2,resultado);
	
	//Mayor que ?
	resultado=var1 > var2;
	printf("%d > %d=%d\n",var1,var2,resultado);
	
	//Diferente de ?
	resultado=var1 != var2;
	printf("%d != %d=%d\n",var1,var2,resultado);
	
	return 0;
}
