#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** vargs)
{

    if(argc==3)
    {
      FILE* fptr_read;
      int no_of_characters,count;
      char ch;
      fptr_read = fopen(vargs[1],"r");
      no_of_characters = atoi(vargs[2]);

      if(fptr_read==NULL)
      {
        fprintf(stdout,"Couldn't open file!");
        return EXIT_SUCCESS;
      }

      fprintf(stdout, "%d\n",no_of_characters);

      fseek(fptr_read,0,SEEK_END);

      count = ftell(fptr_read);

      if(count<no_of_characters)
      {
        fseek(fptr_read,0,SEEK_SET);
      }
      else
      {
      fseek(fptr_read,(-no_of_characters-1),SEEK_CUR);
      }

      while(!feof(fptr_read))
      {

        fscanf(fptr_read,"%c",&ch);
        fprintf(stdout, "%c",ch);

      }

    }
    else
    {
      fprintf(stdout,"Enter 2 arguements!");
    }

    return EXIT_SUCCESS;
}
