#include <stdio.h>
#include <assert.h>
#include "../include/dichotomy.h"
#include "../include/glouton.h"

int main()
{
	int tab[10] = {1, 4, 12, 19, 20, 32, 33, 43, 45, 49};
	assert(find_by_dichotomy(tab, 10, 33) == 6);
	assert(find_by_dichotomy(tab, 10, 15) == -1);

	Glouton glout[3];
	Glouton g1;
	g1.prix = 12;
	g1.poids = 6;
	Glouton g2;
	g2.prix = 5;
	g2.poids = 5;
	Glouton g3;
	g3.prix = 5;
	g3.poids = 5;
	glout[0] = g1;
	glout[1] = g2;
	glout[2] = g3;
	int poidsMAX = 10;
	int longeur = 3;
	triGlout(glout, longeur);
	assert(insertGlouton(glout, longeur, poidsMAX) == 6);
}
