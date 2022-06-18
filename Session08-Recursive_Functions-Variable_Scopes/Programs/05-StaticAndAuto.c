#include<stdio.h>

void count_calls(){ // what are the args?

    // Declare an auto variable
    auto int auto_ctr = 0;

    // Declare a static variable
    static int static_ctr = 0;
    
    auto_ctr++;
    static_ctr++;

    printf("\nStatic %d", static_ctr);
    printf("\nAuto %d", auto_ctr);

    // Return both values (by reference)
}

void main(){
    
    int auto_cnt;
    int static_cnt;

    int ctr;

    // Can I access the static variable -- static_ctr;

    printf("\nCALL 1\n");
    count_calls(&auto_cnt, &static_cnt);
    ctr++;
    printf("Auto Count: %d\n", auto_cnt);
    printf("Static Count: %d\n", static_cnt);

    printf("\n--<Static %d", static_ctr);

    printf("\nCALL 2\n");
    count_calls(&auto_cnt, &static_cnt);
    printf("Auto Count: %d\n", auto_cnt);
    printf("Static Count: %d\n", static_cnt);

    printf("\nCALL 3\n");
    count_calls(&auto_cnt, &static_cnt);
    printf("Auto Count: %d\n", auto_cnt);
    printf("Static Count: %d\n", static_cnt);

    printf("\nCALL 4\n");
    count_calls(&auto_cnt, &static_cnt);
    printf("Auto Count: %d\n", auto_cnt);
    printf("Static Count: %d\n", static_cnt);
}