#include<stdio.h>

int main() {

    int age = 25;
    
    if(age <= 12){
        printf("You are a kiddo.");
    }
    else if(age < 18) {
        printf("You are a teenager.");
    }
    else {
        printf("You are not an Adult.");
    }

    return 0;

}