#include <stdio.h>
#include <math.h>
#include "source.h"



void simple_sum(void)
{
    int l, r;
    scanf("%d %d", &l, &r);

    printf("%d + %d = %d\n", l, r,  l + r);
}


void simple_math(void)
{
    float l, r, result;
    char op;
    scanf("%f %c %f", &l, &op, &r);
    switch(op){
	case '+':
	    result = l + r;
	    break;
	case '-':
	    result = l - r;
	    break;
	case '*' :
	    result = l * r;
	    break;
	case '/':
	    result = l / r;
	    break;
	default:
	    printf("ERR");
	    return;
    }

    printf("%.1f", result);
}
