#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aaaaaa, bbbbbb, xxxxxx, yyyyyy;
   printf("Enter aaaaaa:");
   scanf("%hd", &aaaaaa);
   printf("Enter bbbbbb:");
   scanf("%hd", &bbbbbb);
   printf("%d\n", aaaaaa + bbbbbb);
   printf("%d\n", aaaaaa - bbbbbb);
   printf("%d\n", aaaaaa * bbbbbb);
   printf("%d\n", aaaaaa / bbbbbb);
   printf("%d\n", aaaaaa % bbbbbb);
   xxxxxx = (aaaaaa - bbbbbb) * 10 + (aaaaaa + bbbbbb) / 10;
   yyyyyy = xxxxxx + (xxxxxx % 10);
   printf("%d\n", xxxxxx);
   printf("%d\n", yyyyyy);
   system("pause");
    return 0;
}
