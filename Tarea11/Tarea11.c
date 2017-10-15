#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	float Num1=0.0F,Num2=0.0F;       /*declaramos las variables a utilizar en este caso float por los decimales*/
	int Num3=0; //Usamos int para guardar el número entero
	
	printf("\nMarti%c%cn Luna Jonathan Jos%c\nFES Aragon\nGrupo 1159\n\n",164,162,130);  /*Presentacion*/
	
	printf("\n\n\tDescripci%cn del programa:\nPrograma que pide 3 n%cmeros (2 decimales y 1 entero) y los imprime.\nPosteriormente declara el mayor y  menor o si son iguales. \n",162,163);

	printf("\nDame el primer n%cmero decimal: ",163);
	scanf("%f",&Num1);
	
	printf("\nDame el segundo n%cmero decimal: ",163);     /*Pedimos los numeros decimales*/
	scanf("%f",&Num2);
	
	printf("\nDame el n%cmero entero: ",163);
	scanf("%d",&Num3);
	
	system("CLS");
	printf("\n\n\tLos n%cmeros recibidos son:\n\nN%cmero 1: %f\nN%cmero 2: %f\nN%cmero 3: %d",163,163,Num1,163,Num2,163,Num3);
	if((Num1==Num2) && Num2==Num3)
//Es más fácil verificar primero si los números son iguales
	{
		printf("\n\n\tLos n%cmeros son iguales.\n\n",163);
	}
/*Aqui entra si son distintos, por lo tanto debe haber al menos un mayor*/
	else
	{
//Primero analizamos en el caso de que 2 numeros sean iguales
		if(Num1==Num2)
		{
			if(Num1<Num3)
			{
				printf("\n\n\t%d es el n%cmero mayor, %f y %f Son los n%cmeros menores.\n\n",Num3,163,Num1,Num2,163);
			}
			else
			{
				printf("\n\n\t%f y %f Son los n%cmeros mayores, %d Es el n%cmero menor.\n\n",Num1,Num2,163,Num3,163);
			}
		}
		if(Num1==Num3)
		{
			if(Num1<Num2)
			{
				printf("\n\n\t%f es el n%cmero mayor, %f y %d Son los n%cmeros menores.\n\n",Num2,163,Num1,Num3,163);
			}
			else
			{
				printf("\n\n\t%d y %f Son los n%cmeros mayores, %f Es el n%cmero menor.\n\n",Num3,Num1,163,Num2,163);
			}
		}
		if(Num2==Num3)
		{
			if(Num2<Num1)
			{
				printf("\n\n\t%f es el n%cmero mayor, %d y %f Son los n%cmeros menores.\n\n",Num1,163,Num3,Num2,163);
			}
			else
			{
				printf("\n\n\t%d y %f Son los n%cmeros mayores, %d Es el n%cmero menor.\n\n",Num3,Num2,163,Num1,163);
			}
		}
//Hacemos comparaciones individuales para determinar el mayor y el menor, puesto que ya sabemos que son diferentes todos
		if ((Num1!=Num3) && Num2<Num3 && Num2<Num1)
        /*Hacemos el analisis para ver si Num2 es el menor*/
		{
			if(Num3<Num1)
			{
				printf("\n\n\t%f es el n%cmero mayor y %f es el n%cmero menor \n\n",Num1,163,Num2,163);
			}
			else
			{
				printf("\n\n\t%d es el n%cmero mayor y %f es el n%cmero menor\n\n",Num3,163,Num2,163);
			}
		}
		if ((Num1!=Num2) && Num3<Num1 && Num3<Num2)
		//Hacemos el analisis para ver si Num3 es el menor
		{
			if(Num2<Num1)
			{
				printf("\n\n\t%f es el n%cmero mayor y %d es el n%cmero menor\n\n",Num1,163,Num3,163);
			}
			else
			{
				printf("\n\n\t%f es el n%cmero mayor y %d es el n%cmero menor\n\n",Num2,163,Num3,163);
		    }
	   }
		if ((Num3!=Num2) && Num1<Num2 && Num1<Num3)
		/*Hacemos el analisis para ver si Num1 es el menor*/
		{
			if(Num2<Num3)
			{
				printf("\n\n\t%d es el n%cmero mayor y %f es el n%cmero menor\n\n",Num3,163,Num1,163);
			}
			else
			{
				printf("\n\n\t%f es el n%cmero mayor y %f es el n%cmero menor\n\n",Num2,163,Num1,163);;
			}
		}
		system("PAUSE");
	}
	
	return 0;
}
