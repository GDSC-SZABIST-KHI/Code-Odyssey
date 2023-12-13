#include<stdio.h>

int main() {

    int salary = 25000;
    int oldSalary = salary;
    int newSalary = oldSalary + 500;
    printf("New salary is = %d", newSalary);
    
    int rupee = 1, dollar;
    dollar = 300;

    /*
    order of declaration is important - Wrong Declaration Order
    float pi = 3.14;
    float area = pi * rad * rad;
    float rad = 3;
    */

    // valid declaration
    int a, b, c;
    a = b = c = 22;


    //invalid
    //int a1 = a2 = a3 = 22;

    return 0;

}