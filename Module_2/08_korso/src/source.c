#include <string.h>
#include "source.h"


/* Korsoraattori
 */
void korsoroi(char *dest, const char *src)
{
    int nsep = 0;
    char * sep3 = "niinku ";
    char * sep4 = "totanoin ";

    while(*src){
	if ( *src == ' '){
	    nsep++;
	    strncat(dest, src, 1);
	    dest++;
	    if (nsep % 3 == 0){
		strcat(dest, sep3);
		dest += strlen(sep3);
	    } else if (nsep % 4 == 0){
		strcat(dest, sep4);
		dest += strlen(sep4);
	    }
	    src++;
	} else if ( *src == 'k' && *(src + 1) == 's' ){
	    strncat(dest, "x", 1);
	    dest++;
	    src += 2;
	}else if ( *src == 't' && *(src + 1) == 's' ){
	    strncat(dest, "z", 1);
	    dest++;
	    src += 2;
	}else{
	    strncat(dest, src, 1);
	    dest++;
	    src++;
	}
    }
}
