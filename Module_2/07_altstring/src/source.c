#include <stdio.h>
#include <string.h>
#include "stddef.h"
#include "source.h"


/* Print string */
/* Parameters:
 * s: string to be printed */
void es_print(const char *s)
{
    while(*s != '#'){
	char c = *s;
	printf("%c", c);
	s++;
    }
}

/* String length */
/* Parameters:
 * s: string to be evaluated
 * Returns: length of the string */
unsigned int es_length(const char *s)
{
    int count = 0;
    while(*s != '#'){
	count++;
	s++;
    }
    return count;
}

/* String copy */
/* Parameters:
 * dst: buffer to which the new string is copied
 * src: original string
 * Returns: Number of characters copied
 */
int es_copy(char *dst, const char *src)
{
    int count = 0;
    int found_terminator = 0;
    while(!found_terminator){
	if(*src == '#'){
	    found_terminator = 1;
	} else {
	    count++;
	}
	*dst = *src;
	dst++;
	src++;
    }
    return count;
}

/* String tokenizer */
/* Parameters:
 * s: string to be processed
 * c: character to be replaced by '#'
 * Returns: pointer to the character following the replaced character,
 *          NULL if end of string reached */
char *es_token(char *s, char c)
{
    while(*s != '#'){
	if (*s == c){
	    *s = '#';
	    return ++s;
	}
	s++;
    }
    return NULL;
}
