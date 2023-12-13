#include<stdio.h>

int main() {

    /*
    Format Specifiers:
    
    %d or %i	int	
    %f	float	
    %lf	double	
    %c	char	
    %s	strings 
    */

    int a, b;

    printf("Enter a = \n");
    scanf("%d", &a); // This is prebuilt function coming from stdio.h header file.
    
    printf("Enter b = \n");
    scanf("%d", &b);

    printf("sum of a & b is = %d \n", a+b);
    
    return 0;
}