#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char** vargs)
{

    if(argc>1)
    {
      int count , flag = 1;

      for(count = 0; count<strlen(vargs[1]) ; count = count + 1)
      {
          if(isdigit(vargs[1][count]))
          {
              fprintf(stdout,"This word contains digit(s)\n");
              flag = 0;
              break;
          }
      }
      if(flag)
      {
        fprintf(stdout,"This word doesn't contain digit(s)\n");  
      }

    }
    else
    {
      fprintf(stdout,"Specify the word as a command line arguement!");
    }
    
    return EXIT_SUCCESS;
}
