#include <stdio.h>

int main(void) {

    int foo = 1;
    int bar = 2;
    int moo = 3;


    if (foo < bar) {
        printf("foo is smaller than bar.");
    }

    if (foo > bar) {
    printf("foo is greater than bar.");
    }
    
//         Other form

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else {
        printf("foo is greater than bar.");
    }

//         Other form

    if (foo < bar) {
        printf("foo is smaller than bar.");
    } else if (foo == bar) {
        printf("foo is equal to bar.");
    } else {
        printf("foo is greater than bar.");
    }

//         Other form

    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanut_in_jar > 80) {
        if (penuts_eaten > max_peanut_limit) {
            printf("Take as many peanuts as you want!\n");
        }
    
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("You can't have anymore peanuts!\n");
        } else {
            printf("Alright, just one more peanut.\n");
        }
    }

//         Other form

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar");
    }

    if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

    int target = 9;
    if (target != 10) {
        printf("Target is NOT equal to 10");
    }

    return 0;
}

