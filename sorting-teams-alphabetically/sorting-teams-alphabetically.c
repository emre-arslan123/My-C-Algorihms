// This Algorithm Takes Games From scores.txt File And Evaluates Them.
// Afterwards, Sorts All Teams Alphabetically With Their Points

#include <stdio.h>

main()
{
      FILE *scores;
      int array[91]={0},first,second,firstPoint,secondPoint,i;
      
      scores = fopen("scores.txt","r");
      
      while(!feof(scores))
      {
                       fscanf(scores,"%c %c %d %d\n",&first,&second,&firstPoint,&secondPoint);
                       if(firstPoint<secondPoint)
                       {
                               array[first]++;
                               array[second]+=3;           
                       }
                       else  if(firstPoint>secondPoint)
                       {
                               array[second]++;
                               array[first]+=3;           
                       }
                       else
                       {
                               array[second]+=2;
                               array[first]+=2;
                       }

      }
      for(i=65;i<=90;i++)
      {
                   if(array[i]!=0)
                   {
                             printf("%c Team = %d Points\n",i,array[i]);    
                   }      
      }
      
      fclose(scores);
      getch();
}
