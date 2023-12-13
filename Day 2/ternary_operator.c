#include<stdio.h>

int main() {

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    // Shorthand for if else (only use when we know we have single line execution in body)
    age > 18 ? printf("Adult!\n") : printf("Not adult!\n");

    return 0;
}