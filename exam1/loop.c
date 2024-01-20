#include<stdio.h>

main() 
{  
    int i,j;
      for ( i=0; i<5; i++) 
      {
        // Print leading dashes
        for ( j=i; j<5-1; j++) 
        {
            printf(" ");
        }

        int currentNumber = 10 - i;

        // Print decreasing numbers
        for (j=0; j<=i; j++) 
        {
            printf("%d",currentNumber);
            currentNumber++;
        }
        // Move to the next line after each row
        printf("/n");
      
    }   
}
