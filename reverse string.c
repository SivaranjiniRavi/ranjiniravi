#include<stdio.h>
#include<string.h>

int main() {
   char a[100], temp;
   int i, j = 0;

   printf("\nEnter the string :");
   gets(a);

   i = 0;
   j = strlen(a) - 1;

   while (i < j) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i++;
      j--;
   }

   printf("\nReverse string is :%s", a);
   return (0);
}
