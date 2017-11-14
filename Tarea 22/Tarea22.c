#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#define MAX 10

int main(int argc, char *argv[]) {
	appInfoData("Ejemplo de punteros","14/10/2017");
	
	int Op;
	int a;
	int cals[MAX]={8,9,8,8,6,7,9,8,10,10};//Declaramos todas las variables a usar
	int *ptrCals;
	int J=0;
	int *puntero;
	
	printf("\n\tDescripci%cn del programa:\nTranscripci%cn de los c%cdigos presentados en las diapositivas con motivo de un mejor entendimiento del uso de punteros.",162,162,162);
	//La verdad no entendí a que se refería con numerar los ejemplos, así que decidí crear un menú, ahí se podría decir que se enumeraron.
	printf("\n\n1)Ejemplo 1\n\n2)Ejemplo 2\n\n3)Ejemplo 3\n\n4)Ejemplo 4");
	printf("\n\n5)Ejemplo 5\n\nSelecciona una opci%cn: ",162);
	scanf("%d",&Op);
	system("CLS");
	if((Op>0)&&(Op<6)){
	  switch(Op){
	  
		case 1:
			appInfoData("Ejemplo de punteros","14/10/2017");
			a=10;
			puntero=&a;
			printf("%d\n",*puntero);
			
		break;
		case 2:
			appInfoData("Ejemplo de punteros","14/10/2017");
			a=10;
			puntero=&a;
			printf("%d\n",*puntero);
			printf("%X\n",puntero);
			printf("%d\n",a);
			printf("%X\n",&a);
			
		break;
		
		case 3:
			appInfoData("Ejemplo de punteros y arreglos","14/10/2017");
			
		    
		    printf("Valor del primer elemento: %d\n\n",cals[0]);
		    printf("Direccion del primer elemento: %X\n\n",&cals[0]);
		    printf("Direccion del primer elemento: %X\n\n",cals);
		    
		    ptrCals=cals;
		    
		    printf("Valor del primer elemento: %d\n\n\n",*ptrCals);
		break;
		
		case 4:
			appInfoData("Ejemplo de punteros y arreglos","14/10/2017");
			
			printf("Valor del primer elemento: %d\n",cals[0]);
		    printf("Direccion del primer elemento: %X\n",&cals[0]);
		    printf("Direccion del primer elemento: %X\n",cals);
		    
		    ptrCals=cals;
		    
		    printf("Valor del primer elemento: %d\n",*ptrCals);
		    ptrCals++;
		    printf("Valor del segundo elemento: %d\n",*ptrCals);
		    ptrCals++;
		    printf("Valor del tercer elemento: %d\n",*ptrCals);
		    
		break;
		
		case 5:
			
			appInfoData("Ejemplo de punteros y arreglos","14/10/2017");
			
			ptrCals=cals; //&cals[0];
			
			printf("Elemento\t Direccion \t Valor\n");
			for(J=0;J<MAX;J++){
				printf("Cal.%d\t\t   %X   \t   %d    \n",(J+1),ptrCals,*ptrCals);
				ptrCals++;
			}
			printf("-------------------------------\n");
			
			printf("Direccion a la que apunta: %X\n\n",ptrCals);
			printf("valor al que apunta: %d\n\n",ptrCals);
			ptrCals=ptrCals+4;
			printf("Direccion a la que apunta: %X\n\n",ptrCals);
			printf("Valor al que apunta: %d\n\n",ptrCals);
		
		break;
	 }
	}
	else{
		printf("\n\n\n\tSelecciona una de las opciones mencionadas.\n\n\n");
	}
	system("PAUSE");
	return 0;
}
