#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aaaaaa;
   int16_t aaaaa2;
   int16_t bbbbbb;
   int16_t xxxxxx;
   int16_t ccccc1;
   int16_t ccccc2;
   printf("Enter aaaaaa:");
   scanf("%hd", &aaaaaa);
   printf("Enter bbbbbb:");
   scanf("%hd", &bbbbbb);
   for (int16_t aaaaa2 = aaaaaa; aaaaa2 <= bbbbbb; aaaaa2++)
   printf("%d\n", (aaaaa2 * aaaaa2));
   for (int16_t aaaaa2 = bbbbbb; aaaaa2 <= aaaaaa; aaaaa2++)
   printf("%d\n", (aaaaa2 * aaaaa2));
   xxxxxx = 0;
   ccccc1 = 0;
   while (ccccc1 < aaaaaa)
   {
   {
   ccccc2 = 0;
   while (ccccc2 < bbbbbb)
   {
   {
   xxxxxx = (xxxxxx + 1);
   ccccc2 = (ccccc2 + 1);
   }
   }
   ccccc1 = (ccccc1 + 1);
   }
   }
   printf("%d\n", xxxxxx);
   xxxxxx = 0;
   ccccc1 = 1;
   do
   {
   ccccc2 = 1;
   do
   {
   xxxxxx = (xxxxxx + 1);
   ccccc2 = (ccccc2 + 1);
   }
   while (!(ccccc2 > bbbbbb));
   ccccc1 = (ccccc1 + 1);
   }
   while (!(ccccc1 > aaaaaa));
   printf("%d\n", xxxxxx);
   system("pause");
    return 0;
}
