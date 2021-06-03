#include <stdio.h>

main()
{
      FILE *cipheredMessage,*table,*decipheredOutput;
      int messageNumber,myNumber;
      char myCharacter;
      
      cipheredMessage = fopen("ciphered-message.txt","r");
      table = fopen("cipher-table.txt","r");
      decipheredOutput = fopen("deciphered-message.txt","w");
      
      if(cipheredMessage==NULL || table==NULL)
      {
                     printf("Ciphered Message or Cipher Table is not found!");           
      }
      else
      {
          while(1)
          {
                           fscanf(cipheredMessage,"%d",&messageNumber);
                           table = fopen("cipher-table.txt","r");
                           while(1)
                           {
                                   fscanf(table,"%c %d\n",&myCharacter,&myNumber);
                                   if(myNumber==messageNumber)
                                   {
                                              break;                
                                   }
                           }
                           fclose(table);
                           if (feof(cipheredMessage))
                           {
                                         break;   
                           }
                                            
                           fprintf(decipheredOutput,"%c",myCharacter);            
          }
      }
      
      fclose(cipheredMessage);
      fclose(decipheredOutput);
      
      getch();
}
