#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct registro{
 		int cuenta;
 		char nombre[30];
 		int balance;
 	};

typedef struct registro Cuenta;


int main(int argc, char *argv[]){
  int dato;
  int j=0;
  FILE *ptrArchivo;
  FILE *cfPtr;
  Cuenta c;
  ptrArchivo=fopen("datos.dat","wb");  
  
  if(ptrArchivo==NULL){
     printf("Error al abrir el arhivo.\n");
     }else{
     	
           printf("Dame el dato a guardar al archivo:");
           scanf("%d",&dato);
           
           //Se guarda en archivo
           fprintf(ptrArchivo,"%d\n",dato);
           fprintf(ptrArchivo,"%d\n",++dato);
           fprintf(ptrArchivo,"%d\n",++dato);
           fclose(ptrArchivo);
       }  

int datoLeido;

ptrArchivo=fopen("datos.dat","rb");
if(ptrArchivo==NULL){
          printf("Error al abrir el archivo\n");
          }else{
                while(!feof(ptrArchivo)){
                     fscanf(ptrArchivo,"%d",&datoLeido);
                     printf("Dato:%d\n",datoLeido);
                     }
                     fclose(ptrArchivo);
                     }                
  system("PAUSE");
  system("CLS");
  if((cfPtr=fopen("cuenta5.txt","w"))==NULL){
 	 	printf("No se abrio el archivo");
 	 }else{
 	      printf("Dame la cuenta:");
 	      scanf("%d",&c.cuenta);
 	      
 	      printf("Dame el nombre:");
 	      fflush(stdin);
 	      gets(c.nombre);
 	      
 	      printf("Dame el balance:");
 	      scanf("%d",&c.balance);
 	      for(j=0;j<10;j++){
 	      	fprintf(cfPtr, "%d %s %d \n",c.cuenta, c.nombre, c.balance);
 		  }
 	 }
 	 fclose(cfPtr);
 	 
  return 0;
}
