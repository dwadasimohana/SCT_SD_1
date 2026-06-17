#include <stdio.h>

float celsiusToFahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}
float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5 / 9;
}
float celsiusToKelvin(float c)
{
    return c + 273.15;
}
float kelvinToCelsius(float k)
{
    return k - 273.15;
}
float fahrenheitToKelvin(float f)
{
    return fahrenheitToCelsius(f) + 273.15;
}
float kelvinToFahrenheit(float k)
{
    return celsiusToFahrenheit(k - 273.15);
}
int main(){

    float temp, result;
    char from, to, choice;
    do
    {
        printf("\n*================================*\n");
        printf("      TEMPERATURE CONVERTER\n");
        printf("*================================*\n");

        printf("Enter temperature: ");
        scanf("%f", &temp);
        printf("Enter source unit (C/F/K): ");
        scanf(" %c", &from);
        printf("Enter target unit (C/F/K): ");
        scanf(" %c", &to);
        if ((from == 'C' || from == 'c') &&
            (to == 'F' || to == 'f'))
        {
            result = celsiusToFahrenheit(temp);
        }
        else if ((from == 'F' || from == 'f') &&
                 (to == 'C' || to == 'c'))
        {
            result = fahrenheitToCelsius(temp);
        }
        else if ((from == 'C' || from == 'c') &&
                 (to == 'K' || to == 'k'))
        {
            result = celsiusToKelvin(temp);
        }
        else if ((from == 'K' || from == 'k') &&
                 (to == 'C' || to == 'c'))
        {
            result = kelvinToCelsius(temp);
        }
        else if ((from == 'F' || from == 'f') &&
                 (to == 'K' || to == 'k'))
        {
            result = fahrenheitToKelvin(temp);
        }
        else if ((from == 'K' || from == 'k') &&
                 (to == 'F' || to == 'f'))
        {
            result = kelvinToFahrenheit(temp);
        }
        else if ((from == to) ||
                 (from + 32 == to) ||
                 (from - 32 == to))
        {
            result = temp;
        }
        else
        {
            printf("Invalid units entered!\n");
            continue;
        }
        printf("\n%.2f %c = %.2f %c\n",
               temp, from, result, to);

        printf("\nDo another conversion? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    printf("\nThanks for using the Temperature Converter!\n");
    return 0;
}