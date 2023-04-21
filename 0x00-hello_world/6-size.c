#include <stdio.h>
/**
 * main - A C program that prints compilation and run on
 * Return: (0) means successful
 */
int main(void)
{
printf("Size of a char: 1 byte(s)\n", sizeof(char));
printf("Size of an int: 4 byte(s)\n", sizeof(int));
printf("Size of a long int: 4 byte(s)\n", sizeof(long int));
printf("size of a long long int: 8 byte(s)\n", sizeof(long long int));
printf("Size of a float: 4 byte(s)\n", sizeof(float));
return (0);
}
