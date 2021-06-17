// This Program Takes The Letters Till The 3 Consecutive Letters Are Entered
// And Prints How Many Letters Are Entered Till That Time

#include <stdio.h>
main()
{
      char a,b,c;
      int i=0;
      while(1)
      {
              i++;
              if(i==1)
              {
                     a=getch();
                     printf("%c",a);
              }
              else if(i==2)
              {
                   b=getch();
                   printf("%c",b);
              }
              
              if(i%3==0 && i>=3)
              {
                        c=getch();
                        printf("%c",c);
                        if(c-b==1 && b-a==1)
                        {
                                  break;
                        }
              }
              else if(i%3==1 && i>=3)
              {
                        a=getch();
                        printf("%c",a);
                        if(a-c==1 && c-b==1)
                        {
                                  break;
                        }
              }
              else if(i%3==2 && i>=3)
              {
                        b=getch();
                        printf("%c",b);
                        if(b-a==1 && a-c==1)
                        {
                                  break;
                        }
              }
      }
      printf("\n\nTotally %d Entry",i);
      
      getch();
}
