#if !defined (_PROFESOR_H)
#define _PROFESOR_H

class Elev;
class Catalog;

class Profesor
{
public:
	void ModificareNota(const Elev &elev, Catalog &catalog) const;

private:
	int StabilireNota(const Elev &elev) const;

};

#endif
