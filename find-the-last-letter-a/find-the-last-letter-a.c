// This Algorithm Finds The Last A Letter Without Case Sensitivity
#include <stdio.h>

main()
{
      char word[100];
      int i,length,target;
      printf("Enter a Word: ");
      scanf("%s",word);
      for(length=0;word[length]!='\0';length++)
      {
                      if(word[length]==65 || word[length]==97)
                      {
                                    target=length+1;       
                      }
      }

      printf("\nThe last A or a letter is the %dth letter",target);
      
      getch();
}
