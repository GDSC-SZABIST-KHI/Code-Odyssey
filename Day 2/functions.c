#include<stdio.h>

// Function declaration/prototype
void printHello();

int main() {
    // Function Call
    printHello();
    return 0;
}

//Function Definition
void printHello() {
    printf("Hello Ali!\n");
}

/*
Explanation:


Return Type = int in this function (can be void, float, char, etc)
We have function name = Here it is sum 
Then () in which we write the parameters (like int a, int b)
int sum(int a, int b){
    int c = a + b;
    // c must be of type int as return type is int.
    return c;
}

Function call:
We can store the returned value of function in variable
5 and 2 are arguments
int s = sum(5,2);

*/