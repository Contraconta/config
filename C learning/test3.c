#include <stdio.h>
#include <stdlib.h>

int main() {

    float r,cevre,alan;
    const float PI=3.1415;

    printf("Yari capi girin: ");
    scanf("%f",&r);
    cevre = 2*r*PI;
    alan = PI*r*r;
    printf("Dairenin alani: %f\n",alan);
    printf("Dairenin cevresi: %f\n",cevre);




    return 0;
}
