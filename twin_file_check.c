#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** vargs)
{

  FILE* fptr_read1,*fptr_read2;
  int flag = 1,pos1,pos2;
  char ch1,ch2;

  fptr_read1 = fopen(vargs[1],"r");
  fptr_read2 = fopen(vargs[2],"r");

  if(fptr_read1==NULL || fptr_read2==NULL)
  {
    fprintf(stdout,"Couldn't open file");
    return EXIT_SUCCESS;
  }

  while(!feof(fptr_read1) || !feof(fptr_read2))
  {

    ch1 = fgetc(fptr_read1);
    ch2 = fgetc(fptr_read2);

    if(ch1!=ch2)
    {
      fprintf(stdout,"The files aren't identical!");
      flag = 0;
      break;
    }

  }

  fseek(fptr_read1,0,SEEK_END);
  pos1 = ftell(fptr_read1);
  fseek(fptr_read2,0,SEEK_END);
  pos2 = ftell(fptr_read2);

  if(flag && (pos1 == pos2))
  {
    fprintf(stdout,"The files are identical!");
  }
  else if(flag)
  {
    fprintf(stdout,"The files aren't identical!");
  }

  return EXIT_SUCCESS;
}
