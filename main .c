#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int length;
   char password[100];
   int i;
   srand(time(NULL));
   
   printf("Enter password length: ");
   scanf("%d", &length);
   
   for(i=0; i<length; i++) {
      int random = rand() % 62;
      if(random<26) password[i] = 'a'+random;
      else if(random<52) password[i] = 'A'+random-26;
      else password[i] = '0'+random-52;
   }
   password[length] = '\0';
   printf("Generated password: %s\n", password);
   
   return 0;
}
