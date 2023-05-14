#include <stdio.h>

int main(void) {

    int twoDimArr[3][4]{
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}

    }; 

    int twoDimArr2[1][1];

    twoDimArr2[0][0] = 10;
    twoDimArr2[0][1] = 20;
    twoDimArr2[1][1] = 50;
    twoDimArr2[1][0] = 40;
    
    return 0;
}

