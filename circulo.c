#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

    const double PI = 3.1415926;
    double rad;
    double circ;
    double area;


    printf("input the radius");
    scanf("%lf",&rad);

    circ = 2 * rad * PI;
    printf("circunference: %.3lf\n",circ);

    area = PI * rad * rad;
    printf("area: %lf squared",area);


     return 0;
}





