#if !defined (_ELEV_H)
#define _ELEV_H

class Catalog;
class Profesor;
class Elev
{
private:
	const char* _pNume;

public:
	Elev(const char* pNume):_pNume(pNume)
	{
	}

	const char* Nume() const
	{
		return _pNume;
	}

	void VizualizareNota(const Catalog &catalog) const;
	void MarireNota(const Profesor &profesor, Catalog &catalog);
	/*
	void ModificareNota(Catalog &catalog)
	{
		catalog.ModificareNota(*this, 10);
	}
	*/
};

#endif
