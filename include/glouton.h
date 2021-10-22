typedef struct
{
    int prix;
    int poids;
} Glouton;

void triGlout(Glouton glout[], int longeurTab);
int insertGlouton(Glouton glout[], int longeurTab, int poidsMax);