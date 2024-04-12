#include<stdio.h>
void india ();
void french ();

int
main ()
{
  char ch;
  printf ("Enter the Nation: \n 1)India \n 2) French \n ");
  scanf ("%c", &ch);


  if (ch == '1')
	{
	  india ();
	}
  else
	{
	  french ();
	}
  return 0;
}

void
india ()
{
  printf ("Namaste \n");

}

void
french ()
{
  printf ("Bonjur \n");

}
