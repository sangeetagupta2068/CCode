#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** vargs)
{

  FILE* fptr;
  fptr = fopen(vargs[1],"r+");
  char ch;

  if(argc==2)
  {

  if(fptr==NULL)
  {
    fprintf(stdout,"Couldn't open file!");
    return EXIT_SUCCESS;
  }

  while(!feof(fptr))
  {
    ch=fgetc(fptr);

    if(ch>='a'&& ch<='z')
    {

      ch  = ch  - 32;
      fseek(fptr,-1,SEEK_CUR);
      fputc(ch,fptr);

    }
    else if(ch>='A' && ch<='Z')
    {
      ch  = ch  + 32;
      fseek(fptr,-1,SEEK_CUR);
      fputc(ch,fptr);
    }

  }
  fclose(fptr);
}

  return EXIT_SUCCESS;
  
}
