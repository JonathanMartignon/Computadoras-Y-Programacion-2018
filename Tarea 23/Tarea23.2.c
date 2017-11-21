#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#include "Func.h"

int main(int argc, char *argv[]) {
	appInfoData("Ejemplos de Estructuras","21/10/2017");
	
	int Op=0;
	ALUMNO var1;
	
	printf("\n\n1) Ejemplo 2\n2) Ejemplo 3 \n3) Ejemplo 4\n\n");
	printf("\nSelecciona una opcion: ");
	scanf("%d",&Op);
	system("CLS");
	if((Op>0)&&(Op<4)){
		switch(Op){
			case 1:
				
			    
				printf("\nIntroduce la edad: ");
				scanf("%d",&var1.Edad);
				
				printf("\nIntroduce el nombre: ");
				fflush(stdin);//Limpia el buffer del teclado
		        gets(var1.Nombre);
		        
				printf("\nEdad: %d\nNombre:%s\n\n",var1.Edad,var1.Nombre);
				
			break;
			
			case 2:
				
			    
				var1=nuevoAlumno();
				
				printf("\nEdad: %d\nNombre: %s\n",var1.Edad,var1.Nombre);
				
			break;
			
			case 3:
				
				var1=nuevoAlumno();
				imprimeAlumno(var1);
			
			break;
		
		}
	}else{
		printf("\n\n\n\tSelecciona una de las opciones mostradas.\n\n\n");
	}
	system("PAUSE");
	return 0;
	
}
