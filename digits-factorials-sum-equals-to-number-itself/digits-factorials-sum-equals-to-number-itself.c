// This Algorithm Finds If The Given Number's Digits' Factorials' Sum Equals To Number Itself

#include <stdio.h>
long long int factorial(int);
main()
{
      int number,fakenumber,i;
      long long int sum=0;
      printf("Enter a Number: ");
      scanf("%d",&number);
      fakenumber=number;
      while(1)
      {
              if(fakenumber>0)
              {
                                 
                                 sum += factorial(fakenumber%10);
                                 fakenumber/=10;
                                 printf("%d\n",fakenumber);
              }
              else
              {
                  break;
              }
      }
      if(sum==number)
      {
                   printf("This number's digits' factorials' sum equals to the number itself");  
      }
      else
      {
          printf("This number's digits' factorials' sum doesn't equal to the number itself");
      }
      
      getch();
}

long long int factorial(int number)
{
    int i;
    long long int factorial=1;
    for(i=number;i>0;i--)
    {
                         factorial*=i;
    }    
    return factorial;
}
