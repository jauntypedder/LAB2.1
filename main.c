#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
    printf("LAB2.1 KULYK RE-22 VAR 13...\n");
    printf("Enter x:");
    scanf("%lf", &x);
    if( x>= -3 && x < 3)
    y = (4 * sin(3 * x))+(3 * cos(4 * x));
    else if ( x >= 10 && x < 20 )
    y = (2 * pow(x,2))-(5*x)+9;
    else if ( x >= 100 && x < 1000 )
    y = ((log10(pow(x,2)))/2)-(3*x);
    else
    y = (x / -10)+1;
    system("cls");
    printf("x = %lf", x);
    printf("\ny = %lf", y);
    return 0;
}
