struct alumnos{
	int Edad;
	char Nombre[60];
	char Genero;
	char Carrera[25];
	char NCuenta[10];
};

typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno(){
	ALUMNO tmp;
	printf("Introduce la edad: ");
	scanf("%d",&tmp.Edad);
	
	printf("Introduce el nombre: ");
	fflush(stdin);
	gets(tmp.Nombre);
	
	printf("Introduce el genero: ");
	scanf("%c",&tmp.Genero);
					
	printf("Introduce Carrera: ");
	fflush(stdin);
	gets(tmp.Carrera);
	
	printf("Introduce numero de cuenta: ");
	fflush(stdin);
	gets(tmp.NCuenta);
	
	return tmp;
	}
void imprimeAlumno(ALUMNO al){
	printf("\n\n*************************\n");
	printf("Nombre: %s\n",al.Nombre);
	printf("Edad: %d\n",al.Edad);
	printf("Genero: %c\n",al.Genero);
	printf("Carrera:%s\n",al.Carrera);
	printf("Numero de cuenta: %s\n",al.NCuenta);
}
