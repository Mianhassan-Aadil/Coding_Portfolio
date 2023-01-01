#include <stdio.h>
#include <ctype.h>

float calc(char type, float conv, float temp);

int main()
{    
    char type;
    float temp;
    float conv;
    printf("\nIs the temorature in (C) OR (F): ");
    scanf("%c", &type);

    type = toupper(type);
    printf("\n Enter the Temprature: ");
    scanf("%f", &temp);
    calc(type,conv,temp);
    return 0;
}
    

float calc(char type, float conv, float temp)
{

        switch (type)
    {
    case 'C':
        conv = (temp * 9/5) + 32;
        printf(" The Temprature in F is %5.2f", conv);
        break;
    case 'F':
        conv = ( (temp - 32) * 5 ) /9;
        printf(" The Temprature in C is %5.2f", conv);

    default:
    break;
    }

}