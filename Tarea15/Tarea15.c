#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int var1=5;
	int var2=2;
	int resultado=0;
	
	//Suma
	resultado=var1 + var2;
	printf("%d+%d=%d\n",var1,var2,resultado);
	
	//Resta
	resultado=var1 - var2;
	printf("%d-%d=%d\n",var1,var2,resultado);
	
	//Multiplicacion
	resultado=var1 * var2;
	printf("%d*%d=%d\n",var1,var2,resultado);
	
	//Division
	resultado=var1 / var2;
	printf("%d / %d=%d\n",var1,var2,resultado);
	
	//Modulo
	resultado=var1 % var2;
	printf("%d mod %d=%d\n",var1,var2,resultado);
	
	return 0;
}
