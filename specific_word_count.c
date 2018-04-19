#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "str_upper_header.h"

int main(int argc , char **varg)
{

    if(argc>1)
    {
       FILE* fptr;
       char name[300];
       int count = 0;
       fptr = fopen(varg[1],"r");
       if(fptr==NULL)
       {
         fprintf(stdout,"Sorry! Failed to open file!");
       }
       else
       {
          str_upper(varg[2]);

          while(!feof(fptr))
          {

              fscanf(fptr,"%s",&name);
              str_upper(name);

              if(strcmp(name,varg[2])==0)
              {
                  count=count+1;
              }
              //fprintf(stdout,"%s",name);

          }
          fprintf(stdout,"%d",count);
       }
    }
    else
    {
      fprintf(stdout,"Specify arguements!");
    }

    return EXIT_SUCCESS;
}
