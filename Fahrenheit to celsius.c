#include <stdio.h>
#include <math.h>
int main(){
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32) * 5/9;
 
    printf("\n%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
 
    return 0;
    
}
