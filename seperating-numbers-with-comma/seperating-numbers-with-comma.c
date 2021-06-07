// This Algorithm Seperates The Entered Numbers(Maximum 40 Digits) With Comma(,)

//Example Input: 1234567890123456789012345678901234567890

//Example Output: 1.234.567.890.123.456.789.012.345.678.901.234.567.890

#include <stdio.h>

main()
{
      char charNumber[41];
      int number[40],length,i,copylength;
      
      printf("Enter Your Number(Maximum 40 Digits): ");
      scanf("%s",charNumber);
      
      for(length=0;charNumber[length]!='\0';length++) 
      {
                 number[length]=charNumber[length]-48;                                     
      }
      copylength=length;
      
      for(i=0;i<copylength;i++)
      {
                if(length<=3)
                {
                          printf("%d",number[i]);   
                }
                else if(length%3==1)
                {
                          printf("%d,",number[i]);
                }
                else
                {
                          printf("%d",number[i]);
                }
                length--;        
      }
 
      getch();
}
