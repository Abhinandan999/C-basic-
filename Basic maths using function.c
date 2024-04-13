// Online C compiler to run C program online
#include <stdio.h>

int sum (int a, int b);

int
main ()
{
  int a, b, x, m, n, o;
  printf ("Enter two numbers:\n");
  scanf ("%d %d", &a, &b);
  x = sum (a, b);

  printf ("The addition  is:%d \n", x);

  m = sub (a, b);
  printf ("The substraction is:%d \n", m);

  n = mul (a, b);
  printf ("The multiplication is:%d \n", n);

  o = divi (a, b);
  printf ("The division is:%d \n", o);

  return 0;
}

int
sum (int a, int b)
{
  int z;
  z = a + b;
  return z;
}

int
mul (int a, int b)
{
  int z;
  z = a * b;
  return z;
}


int
divi (int a, int b)
{
  int z;
  z = a / b;
  return z;
}


int
sub (int a, int b)
{
  int z;
  z = a - b;
  return z;
}
