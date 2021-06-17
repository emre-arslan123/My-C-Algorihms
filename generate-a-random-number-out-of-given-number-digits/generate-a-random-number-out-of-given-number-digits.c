// This Algorithm Generates A Random Number Out Of The Digits Of Given Number
// NOTE: Given Number Must Be Less Than 1.000.000.000 And Shouldn't Have Zero(0)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
      
      int number,i,array[10]={0},digit=0,k=-1,randomNum;
      srand(time(NULL));
      printf("Enter A Number: ");
      scanf("%d",&number);
      for(i=1;;i*=10)
      {
                  k++;   
                     if(number/i>0)
                     {
                                   digit++;
                                   array[k]=(number/i)%10;
                     }
                     else
                     {
                         break;
                     }
      }
      
      while(1)
      {
              randomNum=rand()%digit;
              if(array[randomNum]!=0)
              {
                                 printf("%d",array[randomNum]);
                                 array[randomNum]=0;
              }
              if(array[0]==0 && array[1]==0 && array[2]==0 && array[3]==0 && array[4]==0 
                 && array[5]==0 && array[6]==0 && array[7]==0 && array[8]==0 && array[9]==0)
              {
                             break;
                             
              }
             
      }
      
      getch();
}
