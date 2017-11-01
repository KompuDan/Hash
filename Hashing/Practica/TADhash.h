typedef struct elemento
{

	char p[51];
	char d[251];

}elemento;

void Insertar(elemento e);
elemento Buscar(char *parametro);
void Borrar(elemento e);
int Hash(char *parametro);
void Leer(char *ruta);