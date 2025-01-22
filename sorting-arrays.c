// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int num[10];
   int i, j, a;
   int length=5;
   
   printf("Enter the numbers");
   for (i = 0; i < length; i++)
   {
       scanf("%d", &num[i]);
   }
      
   for (i = 0; i < length; i++){
      for (j = i + 1; j < length; j++){
         if (num[i] < num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The number order is:");
   for (i = 0; i < length; ++i){
      printf("%d ", num[i]);
   }
}