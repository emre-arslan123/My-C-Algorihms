/*
This Algorithm Finds How Many Twos Are There Above And Below If The Pole Is Horizontal
And How Many Twos On the Left And Right If The Pole Is Vertical

NOTE: Zeroes(0) Represent The Ground, Ones(1) Represent The Pole

Vertical Pole Patterns Example:
         
0 0 1 2 0 0 0 2 0 0
2 0 1 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0
0 0 1 0 2 0 2 0 0 0
0 2 1 0 0 0 0 0 2 0
0 0 1 0 2 0 0 0 0 0
0 2 1 2 0 0 0 2 0 0
2 0 1 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 2
        
0 2 0 0 0 0 0 0 2 1
0 0 0 0 0 2 0 0 0 1
0 0 0 0 0 0 0 0 0 1
0 2 0 0 0 2 0 0 0 1
0 0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0 0 1
0 0 0 0 2 0 0 0 0 1
0 0 0 0 0 0 0 0 0 1
0 0 0 2 0 0 0 0 0 1
2 0 0 0 0 0 2 0 0 1


Horizontal Pole Patterns Example:
        

1 1 1 1 1 1 1 1 1 1
0 0 0 0 0 2 0 0 0 0
0 0 0 0 0 0 0 0 0 2
0 2 0 0 0 0 0 0 0 0
0 0 0 0 0 0 2 0 0 2
0 0 0 0 0 0 0 0 0 0
0 2 0 0 0 2 0 0 0 0
0 0 0 0 0 0 0 0 0 0
2 0 0 0 0 0 0 2 0 2
0 0 2 0 0 0 2 0 0 0

0 2 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 2 0 0
2 0 0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 1 1
0 0 0 0 2 0 0 0 0 0
0 0 2 0 0 0 0 0 2 0
0 0 2 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 2 0 0
0 2 0 0 0 0 0 0 0 0


*/
#include <stdio.h>

main()
{
      int array[10][10],i,j,left_or_up=0,right_or_down=0,reference_x,reference_y,should_break=0;
      char direction;
      printf("Enter Your 10x10 Pattern:\n\n");
      
      for(i=0;i<10;i++) // Takes The Pattern From User
      {
                      for(j=0;j<10;j++)
                      {
                                      scanf("%d",&array[i][j]);
                      }
      }
      
      //---------------------------------------------
      for(i=0;i<10;i++) // Determines The Direction Of The Pole And Takes The Index Of Pole's Axis
      {
                      for(j=0;j<10;j++)
                      {
                                      if(array[i][j]==1 && array[i+1][j]==1)
                                      {
                                                        direction='y';
                                                        reference_y=j;
                                                        should_break=1;
                                                        break;
                                      }
                                      else if(array[i][j]==1 && (array[i][j+1]==1 || array[i][j-1]==1))
                                      {
                                           direction='x';
                                           reference_x=i;
                                           should_break=1;
                                           break;
                                      }
                      }
                      if(should_break==1)
                      {
                                         break;
                      }
      }
      //---------------------------------------------
      for(i=0;i<10;i++) // Gets Twos On The Above/Below Or Left/Right Counted
      {
                      for(j=0;j<10;j++)
                      {
                                      if(array[i][j]==2)
                                      {
                                                        if(direction=='x' && i<reference_x)
                                                        {
                                                                        left_or_up++;  
                                                        }
                                                        else if(direction=='x' && i>reference_x)
                                                        {
                                                                       right_or_down++;
                                                        }
                                                        else if(direction=='y' && j<reference_y)
                                                        {
                                                             left_or_up++;
                                                        }
                                                        else if(direction=='y' && j>reference_y)
                                                        {
                                                             right_or_down++;
                                                        }
                                      }
                      }
      }
      //---------------------------------------------
      if(direction=='x') // Last Printing
      {
                         printf("\n\nOn The Above: %d  |  On The Below: %d",left_or_up,right_or_down);
      }
      else if(direction=='y')
      {
                         printf("\n\nOn The Left: %d  |  On The Right: %d",left_or_up,right_or_down);
      }
      
      
      
      getch();
}
