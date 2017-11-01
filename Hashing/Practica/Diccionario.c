#include <stdio.h>
#include "TADhash.h"


int main (void)
{
	int opcion=0;
	
	char *ruta;
	
	scanf("%s",ruta);
	Leer(&ruta);
	while(opcion!=6)
	{
		
		printf("\nMenu\n\
		1.-Cargar un archivo de definiciones\n\
		2.-Agregar una palabra y su definicion\n\
		3.-Buscar una palabra y ver su definicion\n\
		4.-Modificar una definicion\n\
		5.-Eliminar una palabra\n\
		6.-Salir\n\nElija una opcion: ");
		scanf("%d",&opcion);
		
	}
	return 0;

};