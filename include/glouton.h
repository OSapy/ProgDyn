/**
 * @file glouton.h
 * @author Julien PEYROL (peyrol.jul@gmail.com)
 * @version 0.1
 * @date 2021-10-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

typedef struct
{
    float prix;
    float poids;
} Glouton;

/**
 * @brief fonction qui permet de trier le tableau
 * 
 * @param glout 
 * @param longeurTab 
 */
void triGlout(Glouton glout[], int longeurTab);

/**
 * @brief fonction qui permet d'inserer des valeurs dans le sac
 * 
 * @param glout 
 * @param longeurTab 
 * @param poidsMax 
 * @return int -> le poids du sac à la fin de l'insertion
 */

int insertGlouton(Glouton glout[], int longeurTab, int poidsMax);