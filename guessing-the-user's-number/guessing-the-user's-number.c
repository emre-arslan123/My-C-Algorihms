// This Algorithm Finds The Number That User Holds According To The User Hints
// 1 - More Than This, 2 - Less Than This, 3 - You Found!

#include <stdio.h>
#include <math.h>

main()
{
      int hint=0,i=1,fakeNumber;
      float gap=50.0,number=50.0;
      fakeNumber=number;
      
      do
      {
          if(i>7)
          {
                 printf("\n\nNo Possible Number!");
                 break;
          }
                        
          printf("%d. Prediction: %d",i,fakeNumber); 
          printf("\nEnter Your Hint: ");
          scanf("%d",&hint);
          if(hint==1)
          {
                     gap=gap/2;
                     number=number+gap;
                     fakeNumber=number;
                     i++;
          }
          else if(hint==2)
          {
                     gap=gap/2;
                     number=number-gap;
                     fakeNumber=number;
                     i++;
          }
          else if(hint==3)
          {
                     printf("\nEureka!");
                     break;
          }
      }while(1);
      
      
      
      getch();
}
