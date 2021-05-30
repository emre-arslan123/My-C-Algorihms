/*
This algorithm finds if the given rectangle is empty or full

NOTE: zeroes(0) represent the ground, ones(1) represent the pattern

Example Empty Rectangles:

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 0 0 0 1 1 0
0 0 1 1 0 0 0 1 1 0
0 0 1 1 0 0 0 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0 0 0


1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 0 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 1 1 1 0 0 0 0 0 0
0 1 0 1 0 0 0 0 0 0
0 1 1 1 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

Example Full Rectangles:

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0 0 0

1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 1 1 1 0 0 0 0 0 0
0 1 1 1 0 0 0 0 0 0
0 1 1 1 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

*/

#include <stdio.h>

main()
{
      int array[10][10],i,j,special0=0,neighbor_sum=0,is_there1=0;
      printf("Enter Your Pattern:\n\n");
      
      for(i=0;i<10;i++) // It Takes The Pattern From User
      {
                       for(j=0;j<10;j++)
                       {
                                        scanf("%d",&array[i][j]);
                       }
      }
      
      for(i=1;i<9;i++) // It Loops Through The Pattern And Checks If There Is Any 0 Whose Neighbors' Sum Is 2 Or More
      {
                       for(j=1;j<9;j++)
                       {
                                        if(array[i][j]==0)
                                        {
                                                          neighbor_sum = 0;
                                                          neighbor_sum = array[i-1][j]+array[i+1][j]+array[i][j-1]+array[i][j+1];
                                                          if(neighbor_sum>=2)
                                                          {
                                                                             special0++;
                                                          }
                                        }
                                        else
                                        {
                                            is_there1++;
                                        }
                       }
      }
      
      
      if(is_there1==0) // Control Blocks
      {
                    printf("\n\nThere Is No Pattern");
      }
      else if(special0>0)
      {
                    printf("\n\nThis Is An Empty Rectangle");
      }
      else
      {
                    printf("\n\nThis Is An Full Rectangle");
      }

      getch();
}
