/**
 * @file glouton.c
 * @author Julien PEYROL (peyrol.jul@gmail.com)
 * @brief  
 * @version 0.1
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <../include/glouton.h>

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
