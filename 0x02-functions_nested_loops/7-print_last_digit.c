#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
        int result;
        result = n%10;
        if (n < 0)
        {
                result *= -1;
                return result;
        }
        else {
        return result;
        }
}

