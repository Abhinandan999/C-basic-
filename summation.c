// Online C compiler to run C program online
#include <stdio.h>

int
main ()
{

  int sum = 0;
  int m, n;
  printf ("Enter the number starting for summation:");
  scanf ("%d", &m);
  printf ("Enter the number where wnd of summation:");
  scanf ("%d", &n);

  for (int i = m; i <= n; i++)
	{
	  sum = sum + i;

	}
  printf ("%d \n", sum);
  return 0;
}
