// This Algorithm Finds The Closest Number Pairs Among The Given 10 Numbers
#include <stdio.h>
main()
{
      int array[10],i,j,gap,store;
      
      printf("Enter 10 Positive Numbers: ");
      for(i=0;i<10;i++)
      {
                       scanf("%d",&array[i]);
      }
      for(i=0;i<10;i++)
      {
                       for(j=0;j<9;j++)
                       {
                                       if(array[j]>array[j+1])
                                       {
                                                             store=array[j];
                                                             array[j]=array[j+1];
                                                             array[j+1]=store; 
                                       }
                       }
      }
      gap=array[9];
      for(i=0;i<9;i++)
      {
                       if((array[i+1]-array[i])<gap)
                       {
                                                    gap=array[i+1]-array[i];
                       }
      }
      for(i=0;i<9;i++)
      {
                       if((array[i+1]-array[i])==gap)
                       {
                                                    printf("\n\nThe Closest Number Pairs: %d %d",array[i],array[i+1]);
                                                    break;
                       }
      }
      
      
      getch();
}
