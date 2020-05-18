#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    if(argc < 3){ //checking if enough arguments
        printf("Not enough arguments!\n");
        return -1;
    }
    
   int n = atoi(argv[1]); // cast string to integer
   int d = atoi(argv[2]);
   
   //To calculate total number of cable length we have to:
   //1)Calculate length of cable for every span;
   //2)Summarize all results that we get in the previous point;
   //If we have for example 4 spans and there are 3 meters between each our calculations will look like this:
   //4 * 3 + 3 * 3 + 2 * 3 + 1 * 3 or (4 + 3 + 2 + 1) * 3 <- that`s what I do 
 
   
   int summ = 0; // finding total summ 
   for( ;n > 0; n--){
      summ +=n;
   }
  
  int result = summ * d; // just multiply

    printf("%i",result);
    return 0;
}
