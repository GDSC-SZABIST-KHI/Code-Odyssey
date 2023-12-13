# include <stdio.h>

int main() {

    int a = 10;

    a += 10;
    printf("a+10 = %d \n", a);
    
    a -= 10;
    printf("a-10 = %d \n", a);
    
    a *= 10;
    printf("a*10 = %d \n", a);
    
    a /= 10;
    printf("a/10 = %d \n", a);
    
    a %= 10;
    printf("a%c10 = %d \n", '%', a);

    // short hands for increments and decreaments
    // a = a+1; a = a-1; 
    // a += 1; a -= 1;
    // a++; a--;

    return 0;
}