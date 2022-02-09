/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   float Subject_1, Subject_2, total, average;
    
    printf("Subject01 Mark: ");
    scanf("%f",&Subject_1);
    printf("Subject02 Mark: ");
    scanf("%f",&Subject_2);
    
    // It will calculate the total & calculate
    total = Subject_1 + Subject_2;
    average = total/2.0;
    
    // Print the final total & average
    printf("\nThe total marks is :\%.2f",total);
    printf("\nThe average marks is :\%.2f",average);
  
  return 0;
}

