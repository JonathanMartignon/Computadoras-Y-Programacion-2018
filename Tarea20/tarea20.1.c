#include <stdio.h>
#include <stdlib.h>
#include "PIva.h"//Programa Iva, tuve problemas al dejarla solo como IVA
	int R,C,i,i2,Op;//Renglones,Columnas,Iniciador,Iniciador2,Opcion Seleccionada
	float Iva;
	
int Cuadrado(int R,int C){ //Ya entendi lo de declarar la función antes del main
			printf("\nIngresa la altura: ");
    		scanf("%d",&R);
    	    printf("\nIngresa el ancho: ");
    		scanf("%d",&C);	   
			system("CLS");
				
			printf("\nCuadro de simbolos + de %dx%d \n\n",R,C);			
			int i,i2;			
			for(i=0;i<=R-1;i++){
				printf("\t");
				for(i2=0;i2<=C-1;i2++){
					printf("+ ");
				}
					
				printf("\n");
			}
	}

int main(int argc, char *argv[]) {
	


	printf("\n\nMarti%c%cn Luna Jonathan Jos%c\nFES Arag%cn\nGrupo 1159\n\n",164,162,130,162);  /*Presentacion*/
	
	printf("\n\tBienvenido al men%c de la Tarea 20\n\n",163);
	printf(" 1) Cuadro de S%cmbolos.\n",161);
	printf(" 2) IVA.\n");
    printf("Selecciona una opci%cn: ",162);
    scanf("%d",&Op);
    
    if((Op<3)&&(Op>0)){//para asegurarnos que eliga una opcion de las posibles
        system("CLS");
        switch(Op){
        	case 1:
    		   Cuadrado (R=0, C=0);
        	break;
    	
    	    case 2:   		  	       	
				printf("\nDame la cantidad IVA: ");//Tiene un margen de error de unas decimas, al parecer redondeando se llega al resultado
		        scanf("%f",&Iva);
        	    printf("\n\nEl IVA es: %f\n\nEl Subtotal es: %f\n\nEl Total es: %f\n\n",Iva,Sub(Iva),Tot(Iva));
    	    break;
	    }
	}
	else
	{
		printf("\n\n\tSelecciona una de las opciones antes mostradas.\n\n\n");
	}
    system("PAUSE");
	return 0;
}
