# include <stdio.h>

// Function to calculate square of a number
// Prototype
int calcSquare(int n);

int main() {

    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("Square is = %d", calcSquare(n));

    return 0;
}

// Function Body
int calcSquare(int n) {
    return n * n;
}