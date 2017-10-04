#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int num=0;
    
    int Iva=0;
    int Tot=0;  //Variables del primer programa
    int Sub=0;
	
	char J1[15];   //Variables para el segundo programa
	char J2[15];
	int  S1=0;
	int  S2=0;
	
	
	printf("\nMarti%c%cn Luna Jonathan Jos%c\nFES Aragon\nGrupo 1159\n\n",164,162,130);  /*Presentacion*/
	printf("\n\tBienvenido al men%c de la Tarea 10\n\n",163);
	printf(" 1) IVA.\n");
	printf(" 2) Piedra, papel o tijera.\n");

	printf("\nPor favor elige una opci%cn: ",162);
	scanf("%d",&num);
	
	switch (num)
	{
		case 1:
			
			system("CLS");
			    
			    printf("\n\tDescripci%cn del programa\n\nPrograma que pide el IVA de una cantidad, imprimiendo el IVA, el subtotal\ny el total. Con scanf.\n",162);
			    printf("\nDame la cantidad IVA: ");
			        
			    scanf("%d",&Iva);			    
			    
			    Sub=(Iva*25)/4;
			    Tot=Sub+Iva;
			    
			    system("CLS");
			    printf("\n\nEl IVA es: %d\n\nEl Subtotal es: %d\n\nEl Total es: %d\n\n",Iva,Sub,Tot);
		
		break;
				    		
		case 2:

            system("CLS");
			    
			    printf("\n\tDescripci%cn del programa\n\nCrear un juego de piedra, papel y tijera diciendo cual es el ganador y si\nlos dos jugadores empataron. Usar scanf e if else\n",162);
			
	     		printf("\nIntroduce nombre Jugador 1: ");
		    	scanf("%s",&J1);
			                                              //Para hacer más amigable el programa
			    printf("\nIntroduce nombre Jugador 2: ");
			    scanf("%s",&J2);
			    
			    system("Cls"); //Para evitar saturar de datos la pantalla
			    printf("\n%s Selecciona un n%cmero de opci%cn: ",J1,163,162);
			    printf("\n\n1)Piedra\n2)Papel\n3)Tijeras\n\n");			    
			    scanf("%d",&S1);
			    
			    system("Cls"); //Para que el segundo jugador no sepa qué fue lo que seleccionó el primero
			    printf("\n%s Selecciona un n%cmero de opci%cn: ",J2,163,162);
			    printf("\n\n1)Piedra\n2)Papel\n3)Tijeras\n\n");			    
			    scanf("%d",&S2);
			    
					system("CLS");
				if(S1!=S2)
				{
				
					if(S1==1)
					{
						if(S2==2)
						{
							printf("\n\n%s Eligi%c Piedra, %s eligi%c Papel\nEl papel le gana a la piedra\n\n\t%s Gana!!\n\n",J1,162,J2,162,J2);
						}
						else
						{
							printf("\n\n%s Eligi%c Piedra, %s eligi%c Tijeras\nLa Piedra rompe las tijeras\n\n\t%s Gana!!\n\n",J1,162,J2,162,J1);
						}					   
					}
					if(S1==2)
					{
						if(S2==1)
						{
							printf("\n\n%s Eligi%c Papel, %s eligi%c Piedra\nEl papel le gana a la piedra\n\n\t%s Gana!!\n\n",J1,162,J2,162,J1);
						}
						else
						{
							printf("\n\n%s Eligi%c Papel, %s eligi%c Tijeras\nLas tijeras cortan el papel\n\n\t%s Gana!!\n\n",J1,162,J2,162,J2);
						}						
						
					}
					if(S1==3)
					{
						if(S2==1)
						{
							printf("\n\n%s Eligi%c Tijeras, %s eligi%c Piedra\nLa Piedra rompe las tijeras\n\n\t%s Gana!!\n\n",J1,162,J2,162,J2);
						}
						else
						{
							printf("\n\n%s Eligi%c Tijeras, %s eligi%c Papel\nLas tijeras cortan el papel\n\n\t%s Gana!!\n\n",J1,162,J2,162,J1);
						}						
					}
			   }
				else
				{
					printf("\n\n\n\tHan Empatado!!\n\n\n");
				}
			
		break;
		default:
		    system("CLS");
			printf("\n\n\n\nPor favor introduce el n%cmero 1 o 2",163);	
	}
	system("pause");
	
	
	return 0;
}
