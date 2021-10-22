/**
 * @file glouton.c
 * @author Julien PEYROL (peyrol.jul@gmail.com)
 * @brief  Algorithme glouton
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <../include/glouton.h>

/**
 * @brief tri le tableau en fonction du rapport qualité prix
 * 
 * @param glout -> tableau à trier
 * @param longeurTab -> longeur du tableau
 */

void triGlout(Glouton glout[], int longeurTab)
{
    Glouton temp;

    for (int i = 0; i < longeurTab; i++)
    {
        for (int j = i + 1; j < longeurTab; j++)
        {
            if (glout[i].prix / glout[i].poids <= glout[j].prix / glout[j].poids)
            {
                temp.poids = glout[i].poids;
                temp.prix = glout[i].prix;
                glout[i] = glout[j];
                glout[j] = temp;
            }
        }
    }
}

/**
 * @brief insere les valeurs du tableau dans le sac
 * 
 * @param glout -> tableau
 * @param longeurTab -> taille du tableau
 * @param poidsMax -> poids max du sac
 * @return totalPoids -> poids inséré dans le sac
 */

int insertGlouton(Glouton glout[], int longeurTab, int poidsMax)
{
    int totalPoids = 0;
    for (int i = 0; i < longeurTab; i++)
    {
        if (glout[i].poids <= poidsMax)
        {
            poidsMax -= glout[i].poids;
            totalPoids += glout[i].poids;
        }
    }
    return totalPoids;
}
