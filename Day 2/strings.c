# include <stdio.h>
# include <string.h> // https://www.tutorialspoint.com/c_standard_library/string_h.htm 
// Explore string.h library with prebuild strings functions

/*
puts is used to display input
fgets is used to take string input 
*/

int main() {
    // Declaration
    char name[] = "Ali Asar";
    char course[] = {'S','Z', 'A', 'B', 'I', 'S', 'T', '\0'};

    // Printing string
    for(int i=0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
    
    // Printing string with pointer
    for(char *ptr=name; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");
    
    // Printing using format specifier
    printf("%s\n", name);
    
    //input a string
    char firstName[40];
    printf("Enter first name : ");
    scanf("%s", firstName);
    
    printf("Your first name is %s\n", firstName);
    char fullName[40];
    printf("Enter full name : ");
    scanf("%s", fullName);
    printf("Your first name is %s\n", fullName);
    
    // fgets & puts
    char fullName2[40];
    printf("Enter full name : ");
    fgets(fullName2, 40, stdin);
    puts(fullName2);
    
    //Library Functions
    char name1[] = "Ali";
    int length = strlen(name1);
    printf("The length of name : %d\n", length);
    
    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);
    
    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);
    
    char str1[] = "Game";
    char str2[] = "Dev";
    printf("%d\n", strcmp(str1, str2));

    //enter String using %c
    printf("Enter string : ");
    char str[100];
    char ch;
    int i = 0;
    while(ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}