#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define	LED 0

int main(int argc, char *argv[])
{
   int i;
   int j;

   j = atoi(argv[1]);

   if (argc != 2)
   {
      printf ("Usage: myblink <#> where number is the number of times to blink.\n");
      printf("Wrong number of args.\n");
   }
   else
   {
      wiringPiSetup();
      pinMode(LED, OUTPUT);

      for ( i=0 ; i<=j ; i++)
      {
         printf("turning on\n");
         digitalWrite(LED, HIGH);

         delay(1000);

         printf("turning off\n");
         digitalWrite(LED, LOW); 

         delay(2000);
      }
   }
   
  return 0;
}
