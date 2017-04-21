#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "source.h"

/* Don't touch the definition of msgs array! Checker uses this. */
char *msgs[10] = {
    "'6=*w+~)._", "J65+~5+~=0/*69,~+9;,9*~19++=79"
};


void ascii_chart(char min, char max)
{
    int cnt = 1;
    for (int i=min; i<=max; i++){
	printf("%3d 0x%0x %c", i, i, isprint(i) ? i : 63);
	printf(cnt % 4 == 0 ? "\n" : "\t");
	cnt++;
    }

}

char get_character(int msg, unsigned int cc) {
    if (msg >= 10 || !msgs[msg])
        return 0;

    if (strlen(msgs[msg]) <= cc)
        return 0;
    
    return msgs[msg][cc];
}


void secret_msg(int msg)
{
    int i = 0;
    while (get_character(msg, i) != 0){
	printf("%c", 158 - get_character(msg, i));
	i++;
    }
}
