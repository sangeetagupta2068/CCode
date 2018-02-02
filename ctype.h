/*@description: This is a header file containing all the parameterized macros for character manipulations.
 *@date: 09.09.2017
 *@author: Sangeeta Gupta
 */

#ifndef CTYPE_H


            #define CTYPE_H 1

            #define isdigit(ch) ((ch)>='0' && (ch)<='9')?1:0

            #define toupper(ch) ((ch>='a' && (ch)<='z'))?((ch)-32):(ch)

            #define tolower(ch) ((ch)>='A' && (ch)<='Z')?((ch)+32):(ch)

            #define isalnum(ch) (((ch)>='A' && (ch)<='Z')||((ch)>='a' && (ch)<='z')||((ch)>='0' && (ch)<='9'))?1:0

            #define isalpha(ch) (((ch)>='A' && (ch)<='Z')||((ch)>='a' && (ch)<='z'))?1:0

            #define isacii(ch)  ((ch)>=0 && (ch)<=127)?1:0

            #define iscntrl(ch) ((ch)>=0 && (ch)<=31)?1:0

            #define isprint(ch) ((ch)>=32 && (ch)<=255)?1:0

            #define isspace(ch) ((ch)==' ' || (ch)=='\t' || (ch)=='\n' || (ch)=='\r' || (ch)=='\v'|| (ch)=='\f')?1:0

            #define isblank(ch) ((ch)==' ' || (ch)=='\t')?1:0

            #define isgraph(ch) ((ch)>=128 && (ch)<=255)?1:0

            #define isxdigit(ch) ((ch)>='A' && (ch)<='F' || (ch)>='0' && (ch)<='9' || (ch)>='a' && (ch)<='f' )?1:0

            #define ispunct(ch) ((ch)>=32 && !(isalnum(ch) && (ch)==' '))?1:0


#endif
