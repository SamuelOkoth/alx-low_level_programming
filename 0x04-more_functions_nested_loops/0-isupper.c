#include "holberton.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
#include "main.h"

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

