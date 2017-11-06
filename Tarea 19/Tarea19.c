#include <stdio.h>
#include <stdlib.h>

//No entendi lo de colocar la funcion completa antes del main

int main(int argc, char *argv[]) {
	
	int R,C,i,i2;//Renglones,Columnas,Iniciador,Iniciador2
	int Cuadro[R][C];

	printf("\n\Marti%c%cn Luna Jonathan Jos%c\nFES Arag%cn\nGrupo 1159\n\n",164,162,130,162);  /*Presentacion*/
		
	printf("Ingresa la altura: ");
	scanf("%d",&R);
	
	printf("\nIngresa el ancho: ");
	scanf("%d",&C);
				   
	system("CLS");
				
	printf("\nCuadro de simbolos + de %dx%d \n\n",R,C);			
							
	for(i=0;i<=R-1;i++)
	{
		printf("\t");
		for(i2=0;i2<=C-1;i2++)
		{
			printf("+ ");
		}
			
		printf("\n");
	}
	return 0;
}
