#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){

    double catA;
    double catB;
    double hip;

    printf("input cat A\t");
    scanf("%lf",&catA);

    printf("\ninput cat B\t");
    scanf("%lf",&catB);

    hip = hypot(catA, catB);

    printf("the hypothenuse length is:\t %lf",hip);
    return 0;
}





