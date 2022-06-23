
#include <stdio.h>
  
int main()
{
    int v = 789;
  
    int *pt2;
  
    int **pt1;
  
    pt2 = &v;
      
    pt1 = &pt2;
      
    printf("Value of v = %d\n", v );
    printf("Value of v using single pointer = %d\n", *pt2);
    printf("Value of v using double pointer = %d\n", **pt1);
    
  return 0;
}