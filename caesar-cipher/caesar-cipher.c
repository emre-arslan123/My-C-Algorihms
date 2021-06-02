#include <stdio.h>

main()
{
      FILE *message,*table,*output;
      int myNumber;
      char myCharacter,myLetter;
      
      message = fopen("my-message.txt","r");
      table = fopen("cipher-table.txt","r");
      output = fopen("ciphered-output.txt","w");
      
      if(message==NULL || table==NULL)
      {
                        printf("Cipher Table or Message File is not found!");
      }
      else
      {
          while(1)
          {
                              fscanf(message,"%c",&myCharacter);
                              table = fopen("cipher-table.txt","r");
                              
                              while(1)
                              {
                                      fscanf(table,"%c %d\n",&myLetter,&myNumber);
                                      if(myCharacter==myLetter)
                                      {
                                                    break;           
                                      }
                              }
                              fclose(table);
                              if(feof(message))
                              {
                                        break;       
                              }
                              
                              fprintf(output,"%d ",myNumber);
          }
      }
      
      fclose(message);
      fclose(output);
      
      getch();
}
