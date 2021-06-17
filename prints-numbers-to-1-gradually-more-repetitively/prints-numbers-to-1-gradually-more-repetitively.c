// This Program Prints The Numbers From The Last Item To 1 Gradually More Repetitively

//Example Input: 7
//Example Output: 7 6 6 5 5 5 4 4 4 4 3 3 3 3 3 2 2 2 2 2 2 1 1 1 1 1 1 1

#include <stdio.h>
main()
{
      int i,j,number;
      printf("Enter A Positive Number: ");
      scanf("%d",&number);
      
      for(i=number;i>0;i--)
      {
                           for(j=-1;j<number-i;j++)
                           {
                                            printf("%d ",i);      
                           }
      }
  
      getch();
}
