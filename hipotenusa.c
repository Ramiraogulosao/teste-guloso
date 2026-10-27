#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){

    double catA;
    double catB;
    double hip;

    printf("input cat A\t");
    scanf("%lf",&catA);

    if (catA <= 0)
    {
        printf("não coloque tamanho negativo ou zero");
        exit(0);
    }

    printf("\ninput cat B\t");
    scanf("%lf",&catB);

    if (catB <= 0)
    {
        printf("não coloque tamanho negativo ou zero");
        exit(0);
    }
    

    hip = hypot(catA, catB);

    printf("the hypothenuse length is:\t %lf",hip);
    return 0;
}





