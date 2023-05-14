#include <stdio.h>

int main(void) {

    int n = 0;
    while (n < 10) {
        n++;
    }

    //Other example
    while (1) {
    // do something
    }

    //Other example
    int m = 0;
    while (1) {
        n++;
        if (n == 10) {
            break;
        }
    }

    //Other example
    int k = 0;
    while (k < 10) {
        k++;


        //check that k is odd
        if (k % 2 == 1) {
            //go back to start of the while block
            contiune; 
        } 
    
        //we reach this code only if k is even
        printf("The number %d is even.\n", k);
    }

    return 0;
}

