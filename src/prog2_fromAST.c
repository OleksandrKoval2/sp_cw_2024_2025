#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aaaaaa;
   int16_t bbbbbb;
   int16_t cccccc;
   printf("Enter aaaaaa:");
   scanf("%hd", &aaaaaa);
   printf("Enter bbbbbb:");
   scanf("%hd", &bbbbbb);
   printf("Enter cccccc:");
   scanf("%hd", &cccccc);
   if (aaaaaa > bbbbbb) 
   {
   if (aaaaaa > cccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cccccc);
   goto Outofif;
Abigger:
   printf("%d\n", aaaaaa);
   goto Outofif;
   }
   }
   if (bbbbbb < cccccc) 
   {
   printf("%d\n", cccccc);
   }
   else
   {
   printf("%d\n", bbbbbb);
   }
Outofif:
   if (((aaaaaa == bbbbbb && aaaaaa == cccccc) && bbbbbb == cccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aaaaaa < 0 || bbbbbb < 0) || cccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(aaaaaa < (bbbbbb + cccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
