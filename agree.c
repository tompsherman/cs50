#include <cs50.h>
#include <stdio.h>

int main(void)
{
   //prompt user to agree
   char c = get_char("Do you agree? ")

   // check if user agree
   if (c == 'y' || c == 'Y')
   {
       printf("Agreed.\n");
   }
   else if (c == 'n' || c == 'N')
   {
       printf("Not agreed.\n");
   }
}