/*
 * File: 6-size.c
 * Auth: Joshua Kenedinum
 */
#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
fprintf("Size of a char: %zu byte(s)\n", sizeof(char));
fprintf("size of an int: %zu byte(s)\n", sizeof(int));
fprintf("Size of a long int: %zu byte(s)\n", sizeof(long int));
fprintf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
fprintf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
