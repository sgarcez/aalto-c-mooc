#include <stdio.h>
#include <stdlib.h>
#include "ships.h"

const unsigned int xsize = 10;
const unsigned int ysize = 10;
const unsigned int shiplen = 3;

/* implement these functions */

/* Task a: Place <num> ships on the game map.
 */
void set_ships(unsigned int num)
{
    while (num){
	int x = rand() % 10;
	int y = rand() % 10;
	int d = rand() % 2;
	while (place_ship(x, y, d) == 0){
	    x = rand() % 10;
	    y = rand() % 10;
	    d = rand() % 2;
	}
	num--;
    }
}


/* Task b: print the game field
 */
void print_field(void)
{
    for (int y=0; y<10; y++){
	for (int x=0; x<10; x++){
	    if (!is_visible(x, y))
		printf("?");
	    else
		printf("%c", is_ship(x, y));
	}
	printf("\n");
    } 
}


/* Task c: Ask coordinates (two integers) from user, and shoot the location.
 * Returns -1 if user gave invalid input or coordinates, 0 if there was no ship
 * at the given location; and 1 if there was a ship hit at the location.
 */
int shoot(void)
{
    int x, y, res;
    res = scanf("%d %d", &x, &y);
    if (res != 2 || x>9 || y>9)
        return -1;
    checked(x, y);
    if (is_ship(x, y) != '.'){
	hit_ship(x, y); 
	return 1;
    }else
	return 0;
}

/* Task d: Returns 1 if game is over (all ships are sunk), or 0 if there
 * still are locations that have not yet been hit. <num> is the number of
 * ships on the game map. It is assumed to be the same as in the call to
 * set_ships function.
 */
int game_over(unsigned int num)
{
    unsigned int found = 0;
    int seq = 0;
    for (int y=0; y<10;y++){
	seq = 0;
	for (int x=0; x<10; x++){
	    if (is_ship(x, y) == '#')
	       seq++;
	    else
		seq = 0;
	    if (seq == 3){
		seq = 0;
		found++;
	    }
	}
    }

    for (int x=0; x<10; x++){
	seq = 0;
	for (int y=0; y<10; y++){
	    if (is_ship(x, y) == '#')
		seq++;
	    else
		seq = 0;
	    if (seq == 3){
		seq = 0;
		found++;
	    }
	}
    }
    return num == found;
}
