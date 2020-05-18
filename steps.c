#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    if(argc < 3){ //checking if user inputs enough arguments
        printf("Not enough arguments!\n");
        return -1;
    }
    
   int n = atoi(argv[1]); // cast string to int
   int k = atoi(argv[2]);
   int res = 0;
   
   for( ;n > 0; n = n - k){ // main algoritm. After each K-th stair I subtract 1 from remaining stairs (like step over) and increase my result by 1. 
       res++;
       n--;
   }
  
    printf("%i",res);
    return 0;
}
