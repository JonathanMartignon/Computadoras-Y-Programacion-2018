#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int Result,Num1,Num2,Op;//Variables a utilizar, Op=Opcion
	
    printf("\nMarti%c%cn Luna Jonathan Jos%c\nFES Aragon\nGrupo 1159\n\n",164,162,130);  /*Presentacion*/
	printf("\n\tDescripci%cn del programa:\n\nPrograma de operaciones Aritm%cticas (Suma y Resta de ENTEROS) que pueda volver a elegir\nentre las opciones del men%c.",162,130,163);
	//Breve descripción del programa para mantener informado de su alcance
	printf("\n\n\tIngresa el primer n%cmero: ",163);//Pedimos un primer numero como base aquí para evitar estarlo pidiendo en todo momento
    scanf("%d",&Result);//Lo guardamos en RESULT, en caso de no hacer nada se mostrará el dato guardado
    
    do 
	{
		system("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
	    printf("Operaciones\n\n");//Presentamos el menú de Operaciones posibles a realizar
		printf("1) Suma\n");
		printf("2) Resta\n");
		printf("3) salir\n");//En caso de no requerir otra operación más
		
		printf("\nOpci%cn seleccionada: ",162);
		
		scanf("%d", &Op);
		
	 if(Op>0 && Op<=3)
	 {
        switch(Op)
        {
        	case 1:

                   system ("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios        	       
        	       printf("\n1) Nueva operaci%cn\n",162);//En caso de que desee dejar de lado lo anterior y comenzar otra operacion
        	       printf("\n2) Continuar la operaci%cn\n",162);//En caso de que el usuario desee continuar con las operaciones realizadas con anterioridad
        	       printf("\nOpci%cn seleccionada: ",162);
        	       scanf("%d",&Op);
        	       switch(Op)
        	       {
        	       	    case 1:
        	       	    	system("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
					    	printf("Ingresa el primer n%cmero: ",163);
                            scanf("%d",&Num1);                           //Pedimos las 2 nuevas cantidades para realizar la operación
                            printf("\nIngresa el n%cmero a sumar: ",163);
        	                scanf("%d",&Num2);
        	       	    	Result=Num1+Num2;
                        	printf("\n\n\tEl resultado es: %d\n\n\n",Result);
                        	system("PAUSE");/*Al ver que el sistema volvia inmediatamente al menú, se decidió colocar "Pausas" para permitir al usuario estar
                        	                Actualizado a lo que hace*/
							                               
						break;
						
						case 2:
                            system("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
						    printf("\nIngresa el n%cmero a sumar: ",163);
        	                scanf("%d",&Num2);
        	       	    	Result=Result+Num2;
                        	printf("\n\n\tEl resultado es: %d\n\n\n",Result);//Pedimos unicamente el segundo valor para realizar la operacion
                        	system("PAUSE");/*Al ver que el sistema volvia inmediatamente al menú, se decidió colocar "Pausas" para permitir al usuario estar
                        	                Actualizado a lo que hace*/
        	       	    break;
				   }
        	       
        	break;
        	
        	case 2:
        		   Op=0;
        		   system ("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
        		   printf("\n1) Nueva operaci%cn\n",162);//En caso de que desee dejar de lado lo anterior y comenzar otra operacion
        	       printf("\n2) Continuar la operaci%cn\n",162);//En caso de que el usuario desee continuar con las operaciones realizadas con anterioridad
        	       printf("\nOpci%cn seleccionada: ",162);
                   scanf("%d",&Op);
        	       switch(Op)
        	       {
        	       	    case 1:
        	       	    	system("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
					    	printf("\nIngresa el primer n%cmero: \n",163);
                            scanf("%d",&Num1);                            //Pedimos las 2 nuevas cantidades para realizar la operación
                            printf("\nIngresa el n%cmero a restar: ",163);
        	                scanf("%d",&Num2);
        	       	    	Result=Num1-Num2;
                        	printf("\n\n\tEl resultado es: %d\n\n\n",Result);
                        	system("PAUSE");/*Al ver que el sistema volvia inmediatamente al menú, se decidió colocar "Pausas" para permitir al usuario estar
                        	                Actualizado a lo que hace*/
							                               
						break;
						
						case 2:
                            system("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
						    printf("\nIngresa el n%cmero a restar: ",163);//Pedimos unicamente el segundo valor para realizar la operacion
        	                scanf("%d",&Num2);
        	       	    	Result=Result-Num2;
                        	printf("\n\n\tEl resultado es: %d\n\n\n",Result);
                        	system("PAUSE");/*Al ver que el sistema volvia inmediatamente al menú, se decidió colocar "Pausas" para permitir al usuario estar
                        	                Actualizado a lo que hace*/
				   } 	
        	break;
        }
     }
     else
     {
        printf("\n\n\tPor favor selecciona una de las opciones del men%c.\n\n\n",163);
        system("PAUSE");/*Al ver que el sistema volvia inmediatamente al menú, se decidió colocar "Pausas" para permitir al usuario estar
                        Actualizado a lo que hace*/
	 }
		
    }
	while (Op>0 && Op<3);
	
	system ("CLS");//Limpiamos la pantalla constantemente para evitar una saturación de datos innecesarios
	printf("\n\n\tEl resultado es: %d\n\n\n",Result);//Al finalizar el programa mostramos la cantidad todal de las operaciones en curso sea 1 o sean "n"
	system("PAUSE");/*Al ver que el sistema volvia inmediatamente al menú, se decidió colocar "Pausas" para permitir al usuario estar
                    Actualizado a lo que hace*/
	
	return 0;
}
