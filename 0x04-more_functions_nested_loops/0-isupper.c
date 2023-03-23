/*
 * File: 0-isupper.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

#include <stdio.h>

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        return (1);
    }
    else if(ch >= 'a' && ch <= 'z')
    { 
	    return (0);
    }
    else
    {
         return (0);
    }

   
}
