#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    int i;
    printf("Program Name: %s\n",argv[0]);
    
    if(argc<3)
        printf("You did not provide sufficient arguments!\n");

    if(argc>=2)
    {
        /* Access arguments and add the numbers, here */

        // printf("\nThe sum is: %d", ??);
    }

    return 0;
}