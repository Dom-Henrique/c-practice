// Read a Celsius temperature and converts into Fahrenheit and Kelvin

#include <conio.h>
#include <stdio.h>

int main(void){
    float celsius;
    
    printf("Celsius: ");
    scanf("%f", &celsius);
    float fah = (celsius * 9/5) + 32;
    float kelvin = celsius + 273;

    printf("Kelvin: %f °K\n", kelvin);
    printf("Fahrenheit: %f °F", fah);

    getch(); // End the code
    return 0;
}