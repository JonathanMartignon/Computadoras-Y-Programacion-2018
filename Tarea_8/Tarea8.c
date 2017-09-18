/*
Programa que ejecuta diversas acciones de acuerdo a la tarea 8
-Hola 1 al 10 con ciclo for
-Tabla del 3 con ciclo for
-Tabla de N a M con scanf y for anidado
-Cuadro de símbolos con ciclo for anidado
-Cuadrado  vacío de  símbolos  +
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num=0;
	
	int Cont=0;
	
	int N=0;
	int M=0;                /*Declaro las variables a utilizar a lo largo del programa*/
	int I=0; 
	
	int C=0;
	int R=0;
	
	printf("\nMartignon Luna Jonathan Jose\nFES Aragon\nGrupo 1159\n\n");  /*Presentacion*/
	printf("\n\tBienvenido al menu de la Tarea 8\n\n");
	printf(" 1)Hola del 1 al 10 con ciclo for\n 2)Tabla del 3 con ciclo for\n 3)Tabla de N a M con scanf y for anidado\n");
	printf(" 4)Cuadro de simbolos con ciclo for anidado\n 5)Cuadrado  vacio de  simbolos  +\n\n");
	printf("Por favor elige una opcion:");
	scanf("%d",&num);
	
	if (num>=1 && num<=5)
	{
		switch (num)
		{
			case 1:
				
				system("CLS");
			
				printf("\nHola del 1 al 10 con ciclo for\n\n");
			
				
				
				for (Cont=1;Cont<=10;Cont++)
				{
					printf("%d.- Hola\n",Cont);
				}
				
				break;
			case 2:
				
				system("CLS");
				
				printf("\nTabla del 3 con ciclo for\n\n");
				
				
				for(Cont=1;Cont<=10;Cont++)
				{
					printf("3x%d=%d\n",Cont,Cont*3);
				}
				
				break;
			case 3:
				
				system("CLS");
				
				printf("\nTabla de N a M con scanf y for anidado \n(SOLO PARA NUMEROS ENTEROS POSITIVOS)\n\n");
				
				printf("Numero a mostrar su tabla:");
				scanf("%d",&N);
				
				printf("Limite de la tabla:");
				scanf("%d",&M);
				
				if(N>=0 && M>=0)
				{
					printf("\nTabla de %d\n\n",N);
					for(I=0;I<=M;I++)
				    {
					    printf("%dx%d=%d\n",N,I,I*N);
				    }
				}
				else				
				{
					printf("Los numeros deben ser positivos enteros");
				}
				
				break;
			case 4:
			   
			    system("CLS");
				
				printf("\nCuadro de simbolos + de 5x5 con ciclo for anidado\n\n");			
							
				for(C=1;C<=5;C++)
				{
					printf("\t");
					for(R=1;R<=5;R++)
					{
						printf("+");
					}
					
					printf("\n");
				}
				
				break;
			case 5:
				
				system("CLS");
				
				printf("\nCuadrado  vacio de  simbolos  + de 5x5\n");
				
				for(C=1;C<=5;C++)
				{
					printf("\t");
					for(R=1;R<=5;R++)
					{
						
						if((R>=2&&R<5) && (C>=2&&C<5))
						{
							printf(" ");
						}
						else
						{
							printf("+");
						}
						
					}
					
					printf("\n");
				}
				
				
				break;

		}
	}
	else
	{
		system("CLS");
		printf("\n\nPor favor selecciona un numero del 1 al 5 de acuerdo a las opciones presentadas\n\n\n\n");
	}
	
	
	return 0;
}
