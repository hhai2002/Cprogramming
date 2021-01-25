#include <stdio.h>

int main()

{

  int age;



  printf("\nEnter an age : ");

  scanf("%d",&age);



  if(age > 0)

    {

      printf("\nYou are: ");

      if(age < 18)

	printf("\nA Child\n");

      else if(age >= 65)



	printf("\nA Senior Citizen\n");



      else



	printf("\nAn Adult\n");

    }

  else

    printf("That's not a valid age");



  return;

}

