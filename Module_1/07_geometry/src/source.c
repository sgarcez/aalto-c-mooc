#include <stdio.h>
#include <math.h>
#include "source.h"


void multi_table(unsigned int xsize, unsigned int ysize)
{
    for (int r=1; r <= ysize; r++){
	for (int c=1; c <= xsize; c++)
	   printf("%4d", r*c); 
	printf("\n");
    }
}


void draw_triangle(unsigned int size)
{
    for (int r=1; r<=size; r++){
	for (int c=1; c<=size; c++){
	    if (c <= size-r)
		printf(".");	
	    else
		printf("#");	
	}
	printf("\n");
    }
}

double distance(int x, int y)
{
    return sqrt(x * x + y * y);
}


void draw_ball(unsigned int radius)
{
    int size = radius * 2 + 1;
    for(int r=1; r<=size; r++){
	for (int c=1; c<=size; c++){
	    if (distance(radius-r+1, radius-c+1) <= radius)
		printf("*");
	    else
		printf(".");
	}    
	printf("\n");
    } 
}
