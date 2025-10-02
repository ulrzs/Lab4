/* Task description:
A twin prime is a prime number that is either 2 less or 2 more than another prime number - for example, either member of the twin prime pair (41, 43).
In other words, a twin prime is a prime that has a prime gap of two.

The first couple of twin primes are (3, 5), (5, 7) and (11, 13). Write a C program to find the 60th twin prime!
Extend the program to check whether the number between the twin primes has any digit equal to 5.
Avoid code duplication, use functions wherever reasonable! Follow the top-down design methodology.
Top-down: when solving programming problems by breaking them down into smaller and smaller sub-problems until each one is trivial or known

*/

#include <stdio.h>
int isprime(int a)
{
  int prime = 1;
  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      prime = 0;
    }
  }
  if (prime == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int digit(int dig, int num)
{
  int cont = 0;
  while (num != 0)
  {
    int d = num % 10;
    if (d == dig)
    {
      cont = 1;
    }
    num = num / 10;
  }
  if (cont == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int main()
{
  int count = 0;
  int n = 2;
  while (count < 60)
  {
    if (isprime(n) == 1 && isprime(n + 2) == 1)
    {
      count++;
    }
    n++;
  }
  n = n - 1;
  printf("The 60. twin prime pair is: %d,%d\n", n, n + 2);

  if (digit(5, n + 1) == 1)
  {
    printf("Contains 5.");
  }
  else
  {
    printf("Doesn't contain 5.");
  }

  return 0;
}
