#include "catalog.h"
#include "elev.h"
#include "profesor.h"
#include <iostream>
using namespace std;


int main()
{
	Catalog unCatalog;
	Elev unElev("Irina Popescu");
	Profesor unProfesor;

	unElev.VizualizareNota(unCatalog);
	unElev.MarireNota(unProfesor,unCatalog);

	getchar();
	return 0;

}
