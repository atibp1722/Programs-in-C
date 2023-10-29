#include <stdio.h>
#include <conio.h>

const int MAX = 4;
 
int main () {

   char *names[] = {
      "Ram Sharma",
      "Shyam Sharma",
      "Rita Sharma",
      "Gita Sharma"
   };
   
   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   
   return 0;
}
