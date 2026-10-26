#include <stdio.h>

int main()
{
//calculator program

char operator = '\0';
double num1 = 0.0;
double num2 = 0.0;
double result = 0.0;

printf("Enter the first number : ");
scanf("%lf", &num1);

printf("Enter the operation ('+', '-','*' or '/')");
scanf(" %c", &operator);    //interval to clear the input buffer

printf("Enter the second number : ");
scanf("%lf", &num2);

switch(operator)
{
    case'+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*':
        result = num1*num2;
        break;
    case '/':
    if(num2==0)
    {
        printf("Divided by 0 is imposible!\n");
        break;
    }
    else 
    {
        result = num1/num2;
        break;
    }
    default:
    printf("Invalid operator\n");

}

printf("Result : %4lf", result);

return 0;
}