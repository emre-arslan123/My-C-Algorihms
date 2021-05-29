/*
This algotihm finds if the given pattern is square or rectangular.
NOTE: 0 numbers represent ground, 1 numbers represent pattern.

Example Pattern:

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 0 0 0
0 0 0 0 0 0 0 0 0 0

*/
#include <stdio.h>

main()
{
      int array[10][10],i,j,x,y,first1=0,horizontal=0,vertical=0;
      printf("Enter your pattern:\n\n");
      for(i=0;i<10;i++)
      {
                      for(j=0;j<10;j++)
                      {
                                      scanf("%d",&array[i][j]);
                      }
      }
      
      //---------------------------------
      
      for(i=0;i<10;i++) // Counting Horizontally
      {
                      for(j=0;j<10;j++)
                      {
                                      if(array[i][j]==1 && first1==0)
                                      {
                                                        first1++;
                                                        for(x=j;x<10;x++)
                                                        {
                                                                         if(array[i][x]==1)
                                                                         {
                                                                                       horizontal++;    
                                                                         }
                                                        }
                                      }
                      }
      }
      first1=0;
      for(i=0;i<10;i++)// Counting Vertically
      {
                      for(j=0;j<10;j++)
                      {
                                      if(array[i][j]==1 && first1==0)
                                      {
                                                        first1++;
                                                        for(y=i;y<10;y++)
                                                        {
                                                                         if(array[y][j]==1)
                                                                         {
                                                                                       vertical++;    
                                                                         }
                                                        }
                                      }
                      }
      }
      //---------------------------------
      if(vertical==0 && horizontal==0)
      {
                     printf("\n\nPlease Enter Valid Pattern!");
      }
      else if(vertical==horizontal)
      {
                             printf("\n\nThis is an Square");
      }
      else
      {
          printf("\n\nThis is an Rectangle");
      }
      
      
      
      getch();
}
