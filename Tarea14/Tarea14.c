#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(int argc, char *argv[]) {
    
    int edad=0;
    const float PI=3.1416;
    
    printf("Cual es tu edad? \n");
    scanf("%d",&edad);
    
    //MAX=6;
    //PI=3.14159265;
    printf("Tu edad es=%d \n",edad);
    printf("Maximo=%d\n",MAX);
    printf("Valor de PI=%f\n",PI);
	return 0;
}
