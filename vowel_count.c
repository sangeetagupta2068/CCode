#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char** vargs)
{

    if(argc>1)
    {
        FILE* fptr;
        fptr = fopen(vargs[1],"r");

        if(fptr==NULL)
        {
          fprintf(stdout,"Couldn't open file\n");
        }
        else
        {
            char ch;
            int count = 0;

            while(!feof(fptr))
            {
                ch = fgetc(fptr);
                ch = tolower(ch);

                if(ch=='a'|| ch =='e'|| ch=='i'|| ch=='o'|| ch=='u')
                {
                    count = count + 1;
                }
            }

            fprintf(stdout,"Total count of vowels: %d\n",count);

        }
    }
    else
    {
       fprintf(stdout,"Specify the filename as an arguement!\n");
    }

    return EXIT_SUCCESS;
}
