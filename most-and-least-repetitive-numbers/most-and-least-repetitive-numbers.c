// This Algorithm Writes The Most And Least Repetitive Numbers(Maximum 18 Digits)

#include <stdio.h>
main()
{
      long long int number,fakenumber,i;
      int array[10]={0},length=0,max=0;
      
      printf("Enter A Positive Number (Maximum 18 Digits): ");
      scanf("%lld",&number);
      fakenumber=number;
      
      for(i=1;;i*=10)
      {
                     if(fakenumber/i>0)
                     {
                                       array[((fakenumber/i)%10)]++;
                                       length++;
                     }
                     else
                     {
                         break;
                     }
      }

      for(i=0;i<10;i++)
      {
                       if(array[i]>max)
                       {
                                       max=array[i];
                       }
      }
      printf("\nThe Most Repetitive Number(s): ");
      for(i=0;i<10;i++)
      {
                       if(array[i]==max && array[i]!=0)
                       {
                                        printf("%d ",i);
                       }
      }
      printf("\nThe Least Repetitive Number(s): ");
      for(i=0;i<10;i++)
      {
                       if(array[i]!=max && array[i]!=0)
                       {
                                        printf("%d ",i);
                       }
      }
      printf("\n\n\nmax = %d \n",max);
      for(i=0;i<10;i++)
      {
                       
                                      printf("%d ",array[i]);
                       
      }
      
      
      getch();
}
