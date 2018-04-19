#include<ctype.h>
#include<stdio.h>
#include<string.h>

void str_upper(char* word)
{
    int count;

    for(count=0;count<strlen(word);count=count+1)
    {
        if(islower(word[count]))
        {
            word[count]=word[count]-32;
        }
    }
    return;
}
