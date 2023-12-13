# include <stdio.h>

int main () {

    //for loop
    //  initialize; condition; increment/decreament
    for(int i=1; i<=10; i++) {
        printf("%d\n", i);
    }

    //while loop
    int i=1;
    // if condition is true then execute
    while(i<=10) {
        printf("%d\n", i);
        i++;
    }

    //do while loop
    i = 1;
    // Atleast executes one time
    do {
        printf("%d\n", i);
        i++;
    } while(i<=10);

    return 0;
}