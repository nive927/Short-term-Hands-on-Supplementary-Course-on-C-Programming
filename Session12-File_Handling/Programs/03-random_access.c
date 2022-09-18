#include <stdio.h>
#include <stdlib.h>

// Reads data in the reverse order

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   long curr_pos; // for ftell()

   if ((fptr = fopen("program.bin","rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   
   // Moves the cursor to the end of the file
   fseek(fptr, -sizeof(struct threeNum), SEEK_END);
	curr_pos = ftell(fptr);
	printf("\nCurrent position in file (bytes): %ld", curr_pos);

   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("\nn1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
      fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
	   curr_pos = ftell(fptr);
	printf("\nCurrent position in file (bytes): %ld", curr_pos);
	   
   }

	fseek(fptr, -sizeof(struct threeNum), SEEK_END);
	curr_pos = ftell(fptr);
	printf("\nCurrent position in file (bytes): %ld", curr_pos);
	rewind(fptr);
	curr_pos = ftell(fptr);
	printf("\nCurrent position in file after rewind (bytes): %ld\n", curr_pos);
	
   fclose(fptr); 
  
   return 0;
}