/* Example explaining structure padding.
*/

#include <stdio.h>

typedef struct sample
{
   char a;
   char b;
   int c;
}SAMPLE_T;

int main()
{
   SAMPLE_T test; // variable declaration of the sample type..

   printf("\n");

   // Displaying the size of the structure sample.
   printf("The size of the sample structure is sizeof(test):(%ld).\n",
            sizeof(test));
   // Displaying the address of each structure member.
   printf("The address of test.a:(%p)\n", &test.a);
   printf("The address of test.b:(%p)\n", &test.b);
   printf("The address of test.c:(%p)\n", &test.c);

   printf("\n");
   printf("So, you can observe that,\nThis(%p) and This(%p) are unused/unusable memory spaces.\n",
            &test.b+1, &test.b+2);

   return 0;
}