#include "elev.h"
#include "catalog.h"
#include "profesor.h"

void Elev::VizualizareNota(const Catalog &catalog) const
{
	catalog.VizualizareNota(*this);

}

void Elev::MarireNota(const Profesor &profesor, Catalog &catalog)
{
	profesor.ModificareNota(*this, catalog);
}

