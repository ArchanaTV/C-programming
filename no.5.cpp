#include <stdio.h>

int main() {
   int arr[100], n, i, j, k;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Remove duplicate elements from the array
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < n; k++) {
               arr[k] = arr[k + 1];
            }
            n--;
         } else {
            j++;
         }
      }
   }

   // Print the array after removing duplicate elements
   printf("The array after removing duplicate elements: ");
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}
