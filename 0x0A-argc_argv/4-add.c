#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_num - checks for valid input
 * @str: array str
 * Return: 0 (success)
 */
int check_num(char *str)
{
/*Declaring variable*/
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string*/

{
if (!isdigit(str[count])) /*count string*/
{
return (0);
}

count++;
}
return (1);
}

/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
/*Delaring variable*/
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /*Goes through the whole array*/
{
if (check_num(argv[count]))

{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}

/*condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
