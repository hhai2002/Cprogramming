#include <stdio.h>

#include <math.h>

int main()

{

  int i, j;

  printf("%d\n", 2);

  for(i = 3; i <= 99999999999100; i = i + 1)

    {

      for(j = 2; j <sqrt(i); j = j + 1)

	{

	  if(i % j == 0)

	    break;

	}

      if(j > sqrt(i))

	{

	  printf("%d\n", i);

	}

    }

  return 0;

}

