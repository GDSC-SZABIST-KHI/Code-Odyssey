#include<stdio.h>

int main() {

    int a = 6, b = 3, c = 3;

    printf("%d \n", a + b);
    printf("%d \n", a - b);
    printf("%d \n", a * b);
    printf("%d \n", a / b);
    
    // Valid
    a = b + c;
    
    // Invalid
    // b + c = a;
   
    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);

    return 0;
}