#include<stdio.h>

int main(int argc, char** argv)
{
    int i;
    printf("Program Name: %s\n",argv[0]);
    
    if(argc==1)
        printf("You did not provide any arguments!\n");

    if(argc>=2)
    {
        printf("Arguments Passed: %d.\n\n",argc);
        printf("Arguments received\n");
        for(i=0;i<argc;i++)
            printf("argv[%d]: %s\n",i,argv[i]);
    }

    return 0;
}