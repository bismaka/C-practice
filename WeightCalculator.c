#include <stdio.h>

int main()
{
    //Temperature conversion program

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temperature Celsius (C) or Fahrenheit (F)?:");
    scanf("%c", &choice);

    if (choice == 'F')
    {   
    printf("Enter your temperature in Fahrenheit:");
    scanf("%2f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9; // F to C
    printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit,celsius);

    }
    else if (choice == 'C')
    {
    printf("Enter your temperature in Celsius:");
    scanf("%2f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;   // C to F
    printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius,fahrenheit);
    }
    else 
    {
        printf("Invalid choice! Please select C or F\n");
    }






    return 0;
}