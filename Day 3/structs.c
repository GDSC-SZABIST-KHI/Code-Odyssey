#include <stdio.h>
#include <string.h>

// struct Student {
//     int reg;
//     char name[100];
//     float cgpa;
// } ;

// Alias given to struct
typedef struct Student {
    int reg;
    char name[100];
    float cgpa;
} stu;

void printInfo(struct Student s1);

int main() {
    
    stu s1[100]; // array of structs
    s1[0].reg = 12312; 
    strcpy(s1[0].name, "Ali");
    s1[0].cgpa = 3.83;    
        
     s1[1].reg = 12;
    strcpy(s1[1].name, "Asar");
    s1[1].cgpa = 3.13;  
    
    s1[2].reg = 444;
    strcpy(s1[2].name, "Bilal");
    s1[2].cgpa = 3;    
        
    printInfo(s1[0]);
    printInfo(s1[1]);
    printInfo(s1[2]);
    return 0;
}

void printInfo(struct Student s1){
    printf("Reg Num = %d\n", s1.reg);
    printf("Name = %s\n", s1.name);
    printf("CGPA = %f\n", s1.cgpa);
}