#include <stdio.h>
#include "source.h"


#ifndef MAWKKE
// longer solution by Pasi

/* 03-mastermind
 */
void mastermind(const int *solution, const int *guess, char *result, unsigned int len)
{
    for (unsigned int g = 0; g < len; g++){
	char res_value = '-';
	int v = guess[g];
	if (solution[g] == v){
	   res_value = '+';
	} else {
	    for (unsigned int i = 0; i < len; i++){
		if (i != g && v == solution[i])
		    res_value = '*';
	    }
	}
	result[g] = res_value;
    }
}
#endif
