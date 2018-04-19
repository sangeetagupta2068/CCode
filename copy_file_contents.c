#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** args)
{

    if(argc==3)
    {
      FILE* fptr_write,*fptr_read;
      fptr_write  = fopen(args[2],"w");
      fptr_read = fopen(args[1],"r");

      if(fptr_read == NULL || fptr_write==NULL)
      {
        fprintf(stdout,"Sorry!Couldn't open file!");
        return EXIT_SUCCESS;
      }
      else
      {
          char ch;
          while(!feof(fptr_read))
          {

            fscanf(fptr_read,"%c",&ch);
            fprintf(stdout,"%c",ch);
            fprintf(fptr_write,"%c",ch);

          }
      }
    }

    else
    {
      fprintf(stdout,"Too few arguements!");
    }

    return EXIT_SUCCESS;
}
