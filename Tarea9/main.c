#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num=0; //Utilizaremos la variable "num" en casi todos nuestros programas para minimizar el codigo.
	int Lim=0; //limite de los asteriscos en el tercer programa.
	
	printf("\nMarti%c%cn Luna Jonathan Jos%c\nFES Aragon\nGrupo 1159\n\n",164,162,130);  /*Presentacion*/
	printf("\n\tBienvenido al men%c de la Tarea 9\n\n",163);
	printf(" 1) D%ca de la semana.\n",161);
	printf(" 2) Par o impar.\n");
	printf(" 3) Asteriscos.\n");
	printf("\nPor favor elige una opci%cn: ",162);
	scanf("%d",&num);
	
	if (num>=1 && num<=3)
	{
		switch (num)
		{
			case 1:
			    
				num = 0;   
			    system("CLS");
			    
			    printf("\n\tDescripci%cn del programa\n\nQue pida un n%cmero del 1 al 7 y diga el d%ca de la semana correspondiente.\nCon scanf y switch case.\n",162,163,161);
			    printf("\nDame un n%cmero del 1 al 7: ",163);
			    
			    scanf("%d",&num); //Aqui podemos apreciar el uso de "Scanf".
			    
			    switch(num) //Apartir de aquí se usa el Switch de acuerdo a lo solicitado en la tarea.
			    {
			    	case 1:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: Lunes\n\n",161);
			    	break;
			    	
			    	case 2:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: Martes\n\n",161);
			    	break;
			    	
			    	case 3:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: Mi%crcoles\n\n",161,130);
			    	break;
			    	
			    	case 4:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: Jueves\n\n",161);
			    	break;
			    	
			    	case 5:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: Viernes\n\n",161);
			    	break;
			    	
			    	case 6:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: S%cbado\n\n",161,160);
			    	break;
			    	
			    	case 7:
			    		system("CLS");
			    		
			    		printf("\n\n\tEl d%ca es: Domingo\n\n",161);
			    	break;
			    	
			    	default: /*En caso de que el numero seleccionado no cumpla con los requisitos se dará un aviso*/
			    	
			    		system("CLS");
			    		printf("\n\n\tPor favor introduce un n%cmero del 1 al 7\n\n",163);
					
				}
			break;
			
			case 2:
				system("CLS");
				
				printf("\n\tDescripci%cn del programa\n\nQue pida un n%cmero y diga si es par o impar.\nCon scanf y if else.\n",162,163);
				
				printf("Dame un n%cmero: ",163);
				
				scanf("%d",&num); //Se puede apreciar el uso de Scanf.
				
				if(num%2==0)//Al ser 0 el residuo de la division se deteremina que es par.
				{
					system("CLS");
					
					printf("\n\n\tEl n%cmero %d es: Par\n\n",163,num);
				}
				else 
				{
					system("CLS");
					
					printf("\n\n\tEl n%cmero %d es: Impar\n\n",163,num);
				}
			
			break;
			
			case 3:
				
				system("CLS");
				
				printf("\n\tDescripci%cn del programa\n\nQue pida un n%cmero y muestre en pantalla el mismo n%cmero de asteriscos.\nCon scanf y for.\n",162,163,163);				
				printf("\nDame el n%cmero de asteriscos a mostrar: ",163);
				
				scanf("%d",&Lim); //Se puede apreciar el uso de Scanf.
				
				system("CLS");
				
				printf("\n\n\t");
				
				for(num=1;num<=Lim;num++)//Se puede apreciar el uso de For.
				{
					printf("* ");
				}
				
				printf("\n\n");
			
			break;
			
		}
		
	}
	else
	{
		system("CLS");
		printf("\n\n\tPor favor introduce un n%cmero del 1 al 3\n\n",163);
	}
}
