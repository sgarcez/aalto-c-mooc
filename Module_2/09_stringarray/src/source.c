#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "source.h"


/* Print string array, last element is NULL */
/* Parameters:
 * array: string array to be printed, each string on own line */
void print_strarray(char *array[])
{
    for (int i=0; array[i] != NULL; ++i) {
        const char *c = array[i]; 
        while(*c) {
            printf("%c", *c);
            c++;
        }
        printf("\n");
    } 
}

/* Put strings from string separated by space to a string array */
/* Parameters:
 * string: string to be cut into parts and placed into the array, 
   remember to add ending zeros '\0' for strings and NULL to the end of the whole array!
 * arr: ready-made array that the strings will be put into */
void str_to_strarray(char* string, char** arr)
{
    int w = 0;
    int c = 0;
    while (*string){
        if (*string == ' '){
            arr[w][c] = '\0';
            c = 0;
            w++;
        }else{
            arr[w][c] = *string;
            c++;
        }
        string++;
    }
    arr[w][c] = '\0';
    arr[w+1] = NULL;
}
