/* In this example we are understanding
factorial of number by using of Recursion function*/

#include<stdio.h>
int Factorial (int n);
int
main ()
{
  printf ("Factorial is %d", Factorial (5));
  return 0;

}

int
Factorial (int n)
{
  if (n == 1)
	{
	  return 1;
	}
  int Factorial1 = Factorial (n - 1);
  int Factorialn = Factorial1 * n;
}
