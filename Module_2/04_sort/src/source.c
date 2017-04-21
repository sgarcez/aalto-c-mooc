#include "source.h"


/* Selection sort */
/* Parameters:
 * start: start of an array
 * size: length of an array
 */
void sort(int *start, int size)
{
    int offset = 0;
    for (int i = 0; i < size; i++){
	int smallest_index = offset;
	for (int j = offset; j < size; j++){
	    if (start[j] < start[smallest_index])
		smallest_index = j;
	}
	int tmp = start[offset];
	start[offset] = start[smallest_index];
	start[smallest_index] = tmp;
	offset++;
    }
}

