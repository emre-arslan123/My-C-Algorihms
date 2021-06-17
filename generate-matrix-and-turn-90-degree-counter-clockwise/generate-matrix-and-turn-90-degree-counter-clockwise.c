// This Algorithm Generates A Random Matrix In The Specified Size And Turns 90 Degree Counter Clockwise Direction

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
      srand(time(NULL));
      int rowQuantity,columnQuantity,i,j;
      printf("Enter Your Size : ");
      scanf("%d %d",&rowQuantity,&columnQuantity);
      int matrix[rowQuantity][columnQuantity];
      
      for(i=0;i<rowQuantity;i++)
      {
                                for(j=0;j<columnQuantity;j++)
                                {
                                                          matrix[i][j]=rand()%5 + 1;
                                                          printf("%d ",matrix[i][j]);
                                }
                                printf("\n");
      }
      printf("\n\n");

      
      for(i=columnQuantity-1;i>=0;i--)
      {
                                for(j=0;j<rowQuantity;j++)
                                {
                                                          printf("%d ",matrix[j][i]);
                                }
                                printf("\n");
      }
      
      getch();
}
