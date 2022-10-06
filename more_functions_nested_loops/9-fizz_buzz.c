#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzVuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char f[] = "Fizz";
char g[] = "Buzz";
char fg[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", fg);
else if (i == 100)
printf("%s ", g);
else if (i % 3 == 0)
printf("%s ", f);
else if (i % 5 == 0)
printf("%s ", g);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
