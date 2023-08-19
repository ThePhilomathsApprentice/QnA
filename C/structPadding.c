/* Example explaining structure padding.
 */

#include <stdio.h>

typedef struct sample
{
   char a;
   char b;
   int c;
} SAMPLE_T;

int main()
{
   /* Variable declaration of a bad sample type..
    */
   SAMPLE_T test_bad;

   printf("\n");

   /* Displaying the size of the structure sample.
    */
   printf("The size of the sample structure is sizeof(test_bad):(%ld).\n",
          sizeof(test_bad));

   /* Displaying the address of each structure member.
    */
   printf("The address of test_bad.a:(%p)\n", &test_bad.a);
   printf("The address of test_bad.b:(%p)\n", &test_bad.b);
   printf("The address of test_bad.c:(%p)\n", &test_bad.c);

   printf("\n");
   printf("So, you can observe that,\nThis(%p) and This(%p) are unused/unusable memory spaces.\n",
          &test_bad.b + 1, &test_bad.b + 2);

   printf("\n");
   printf("\n");

   return 0;
}