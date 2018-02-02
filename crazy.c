        #include <stdio.h>

        #include "crazy.h"

       /*@description: Here is my attempt to mess around with the C syntax for fun!
        *@author: Sangeeta Gupta
        *@date:01.01.2018
        */

        C main()

              BEGIN

                  integerVar num1;

                  integerPointer num1Ptr;

                  num1=10;

                  num1Ptr=addressOf(num1);

                  if(num1)

                        BEGIN
                              printf("\nValue of num1:%d",valueAtPointer(num1Ptr));
                        END

              END
