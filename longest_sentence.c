#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** vargs)
{

    if(argc>1)
    {
        FILE* fptr;
        char temp,arr[700];
        int count1=0, count_max=0;
        fptr = fopen(vargs[1],"r");

        if(fptr==NULL)
        {
          fprintf(stdout,"Couldn't open file!");
          return EXIT_SUCCESS;
        }
        else
        {
            while(!feof(fptr))
            {
                fscanf(fptr,"%c",&temp);
                count1 = count1+1;

                if(temp=='.')
                {
                    if(count1>count_max)
                    {
                      count_max = count1;
                    }
                    count1 = 0;
                }
            }

            fprintf(stdout, "%d\n",count_max );
            fseek(fptr,-count_max-1,SEEK_CUR);
            fgets(arr,count_max,fptr);
            fprintf(stdout, "%s\n",arr );

        }
    }
    else
    {
        fprintf(stdout,"Specify the filename as an arguement!");
    }
    
    return EXIT_SUCCESS;
}
