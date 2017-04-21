#include "source.h"
#include "ctype.h"
#include <string.h>

/* Count Alpha
 * Count number of alphabetic characters in the given string <str>,
 * and return the count
 */
int count_alpha(const char *str)
{
    int n_alpha = 0;
    while(*str){
	if(isalpha(*str)){
	    n_alpha++;
	}
	str++;
    }
    return n_alpha;
}


/* Count Substring
 * Count number of occurances of substring <sub> in string <str>,
 * and return the count.
 */
int count_substr(const char *str, const char *sub)
{
    int n_sub_found = 0;
    int curr_sub_index = 0;
    int sub_len = strlen(sub);
    while(*str){
	int c = *str;
	if (c == *(sub+curr_sub_index)){
	    curr_sub_index++;
	    if (curr_sub_index == sub_len){
		curr_sub_index = 0;
		n_sub_found++;
	    }
	}
	str++;
    }
    return n_sub_found;
}


