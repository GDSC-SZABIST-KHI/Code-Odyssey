#include<stdio.h>

int main() {

    printf("%d \n", 3<4 && 3<5); // AND (both should be true)
    printf("%d \n", 3<4 && 5<4); 
    printf("%d \n", 3<4 && 5<4);
    printf("%d \n", 3>4 && 5>4);
    printf("%d \n", 3<4 && 3<5);
    printf("%d \n", !(3<4 && 3<5)); // AND WITH NEGATION
    printf("%d \n", !(4<3 || 5<3)); // OR WITH NEGATION

    return 0;
}