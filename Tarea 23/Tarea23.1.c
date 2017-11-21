#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#include "Func.h"
#define MAX 3

int main(int argc, char *argv[]) {
	appInfoData("Ejemplos de Estructuras","21/10/2017");
	
	printf("\n\tEjemplo 1");
	struct alumnos var1;
	printf("\n\nIntroduce la edad: ");
	scanf("%d",&var1.Edad);
	
	printf("\nIntroduce el nombre: ");
	fflush(stdin);//Limpia el buffer del teclado
	gets(var1.Nombre);
	
	
	printf("\nEdad: %d\nNombre:%s\n\n",var1.Edad,var1.Nombre);
	system("PAUSE");
	system("CLS");
//---------------------------------------------------------------------------
	appInfoData("Ejemplos de Estructuras","21/10/2017");
	printf("\n\n\tEjercicio 5");
	
	ALUMNO lista[MAX];
	int J=0;
	for(J=0;J<MAX;J++){
		printf("\n\n\tDatos alumno %d\n\n",J+1);
		lista[J]=nuevoAlumno();
	}for(J=0;J<MAX;J++)
	imprimeAlumno(lista[J]);
	
	
	return 0;
}
