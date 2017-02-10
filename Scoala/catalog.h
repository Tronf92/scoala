#if !defined (_CATALOG_H)
#define _CATALOG_H_

class Elev;

class Catalog
{
		friend class Profesor;
public:
	void VizualizareNota(const Elev &elev) const;

private:
	void ModificareNota(const Elev &elev, int nota);
};

#endif
