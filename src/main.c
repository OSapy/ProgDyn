#include <stdio.h>
#include <assert.h>
#include "../include/dichotomy.h"

int main()
{
	int tab[10] = {1, 4, 12, 19, 20, 32, 33, 43, 45, 49};
	assert(find_by_dichotomy(tab, 10, 33) == 6);
	assert(find_by_dichotomy(tab, 10, 15) == -1);
}