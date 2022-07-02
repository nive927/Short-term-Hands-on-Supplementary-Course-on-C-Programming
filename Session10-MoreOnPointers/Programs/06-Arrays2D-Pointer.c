#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[3][4] = {
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };

    int i, j;

    // int a[] = {}

    // int **p;
    // create a pointer to point to an array of 4 elements

    /* which one is right? */
    // int (*p)[4]; 
    // int *p[4];    *p[4] - [ .. .] eahc-> int*  

    // int *p = (int*)malloc(sizeof(int)*N);
    int **p;

    p = (int**)malloc(sizeof(int*)*3);

    // **p -> [oX12] ->  0X12 [567, ., . , .]
    // **p 

    for(int i=0; i<3; i++){
        *(p+i) = (int*)malloc(sizeof(int)*4);
        *(p+i) = arr[i];
    }

    // p = arr;

    for(i = 0; i < 3; i++)
    {
        printf("Address of %d-th array %u \n",i , p + i);
        for(j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]=%d\n", i, j, *( *(p + i) + j) );
        }
        printf("\n\n");
    }

    return 0;
}