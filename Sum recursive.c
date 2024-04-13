/* In this example  we leartnt that recursive function using sum*/

#include<stdio.h>
int  sum(int n);
int main ()
{
  printf ("Sum  is %d", sum(5));
  return 0;

}

int sum(int n)
{
  if (n == 1)
	{
	  return 1;
	}
  int sum1 =sum(n - 1);
  int sumn = sum1 + n;
}