# include <stdio.h>

int main() {
    // KEY NOTE = Arrays are pointers

    // Array decalaration with size 3
    int marks[3];

    // Arrays index starts from 0 to n-1 = In this case 3-1 =2 | So 0 , 1, 2 Index

    printf("Physics : ");
    scanf("%d", &marks[0]);
    printf("Chem : ");
    scanf("%d", &marks[1]);
    printf("Maths : ");
    scanf("%d", &marks[2]);

    // Accessing array values using index to print
    printf("Physics = %d, ", marks[0]); //physics
    printf("Chem = %d, ", marks[1]); //chem
    printf("Maths = %d \n", marks[2]); //maths

    return 0;
}