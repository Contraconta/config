#include <stdio.h>

int main(void) {

    //only use for reading
    char * name1 = "John Smith";
    //same but you can manipulate
    char name2[] = "John Smith";
    //'John Smith' is exactly ten characters long so we add one character.
    char name3[11] = "John Smith";
    printf("%s is a man.", name);

    //STRING COMPARASION

    char * name4 = "John";

    if (strncmp(name4, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

    //STRING CONCATENATION
    
    char * first_name = "John";
    char last_name[] = "Doe";
    char name[100];

    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }

    name[0] = '\0';
    strncat(name, first_name, 4);
    strncat(name, last_name, 20);
    printf("%s\n", name);

    return 0;
}

