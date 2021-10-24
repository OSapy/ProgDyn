/**
 * @file pgcb.c
 * @author Julien Peyrol (peyrol.jul@gmail.com)
 * @version 0.1
 * @date 2021-10-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <stdbool.h>
#include "../include/pgcb.h"

int *getMatrice(const int ligne, const int colonne)
{
    int taille = ligne * colonne;
    int *Matrice = malloc(taille * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < taille - 1; i++)
    {
        Matrice[i] = rand() % 2;
    }
    return Matrice;
}

void seeMatrice(const int *Matrice, const int ligne, const int colonne)
{
    int k = 0;
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            if (Matrice[k] == 0)
            {
                printf("   ");
            }
            if (Matrice[k] == 1)
            {
                printf(" * ");
            }
            k++;
        }
        printf("\n");
    }
}