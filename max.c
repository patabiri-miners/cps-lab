#include <stdio.h>

#define SIZE 10

int main () {


	int dog[10] = {0,-1,2,-3,4,-5,6,-7,8,-9};
	int max = dog[0];
	
	/* if (max > dog[1])
      		printf("the max is %d \n", max);
   	else
      	{
      	printf("the max is %d", dog[1]);
      	}
   	*/

    	for (int i=0; i< SIZE ; ++i)
      	{
         if(max > dog[i])
            printf("max = %d \n", max);
         else
            {
               max = dog[i];
               //printf("max = %d \n", dog[i]);
            }
      	}//for loop scope
      	
	return 0;
}
