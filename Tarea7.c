/*Programa que pide 3 numeros enteros mayores a 0 y diferentes de si mismos,
los analiza y determina el menor de ellos*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int Num1=0;
	int Num2=0;       /*declaramos las variables a utilizar*/
	int Num3=0;
	
	printf("Dame el primer numero:");
	scanf("%d",&Num1);
	
	printf("\nDame el segundo numero:");     /*Pedimos los numeros a comparar*/
	scanf("%d",&Num2);
	
	printf("\nDame el tercer numero:");
	scanf("%d",&Num3);
	
	if((10>=Num1>0) && 10>=Num2>0 && 10>=Num3>0 && (Num1!=Num2) && (Num2!=Num3))
	/*Pedimos que los numeros sean mayores a 0, menores a 10 y diferentes de si mismos.*/
	{
		if(Num1<Num2 && Num1<Num3)
		/*Hacemos el analisis para ver si Num1 es el menor*/
		{
			printf("\n %d es el numero menor\n\n",Num1);
		}
		if (Num2<Num3 && Num2<Num1)
		/*Hacemos el analisis para ver si Num2 es el menor*/
		{
			printf("\n %d es el numero menor\n\n",Num2);
		}
		if (Num3<Num1 && Num3<Num2)
		/*Hacemos el analisis para ver si Num3 es el menor*/
		{
			printf("\n %d es el numero menor\n\n",Num3);
		}
	}
	else
	/*En caso de no cumplir con las condiciones se le recordaran*/
	{
		printf("Los numeros deben ser mayores a 0 y diferentes entre si.\n\n");
	}
	
	return 0;
}
