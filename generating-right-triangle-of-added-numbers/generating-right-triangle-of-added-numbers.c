/*
This Algorithm Generates A 10-Line Right Triangle Of Numbers Which Are Increasing By The Value Of Line

Example Input: 46

Example Output:

046
046 048
048 051 054
054 058 062 066
066 071 076 081 086
086 092 098 104 110 116
116 123 130 137 144 151 158
158 166 174 182 190 198 206 214
214 223 232 241 250 259 268 277 286
286 296 306 316 326 336 346 356 366 376

*/

#include <stdio.h>

main()
{
      int number,i,j;

      do
      {
          printf("Please, Enter A Number Less Than Or Equal To 500: ");
          scanf("%d",&number);    
      }while(number>500);
      
      printf("\n\n");
      for(i=1;i<=10;i++)
      {
                       for(j=1;j<=i;j++)
                       {
                                       if(number<10)
                                       {
                                                     printf("00%d ",number);
                                       }
                                       else if(number<100)
                                       {
                                                     printf("0%d ",number);
                                       }
                                       else
                                       {
                                           printf("%d ",number);
                                       }
                                       number+=i;
                       }
                       number-=i;
                  printf("\n");
      }

      getch();
}
