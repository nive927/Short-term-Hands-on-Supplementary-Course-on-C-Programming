#include<stdio.h>
#include<stdlib.h>

struct fraction{
    int numerator;
    int denominator;
};

typedef struct fraction Fraction;


void display_fraction(Fraction num){
    printf("%d / %d", num.numerator, num.denominator); // # 4 / 5
}

float get_fractional_num(Fraction num){
    /* Eg: for 4/5, return 0.8 */
    return (float) num.numerator / num.denominator;
}


/*define a function to simplify the fraction */
// Eg: 10/12: 1 common factor only,  should return 5/6
Fraction simplify(Fraction num){

    int min_num = num.numerator < num.denominator ? num.numerator : num.denominator; 
    
    // for(int i=2; i<min_num)
    
    short flag = 0;
    for(int i=2; i<=min_num; i++){
        if(num.numerator%i==0 && num.denominator%i==0){
            flag = 1;
            num.numerator/=i;
            num.denominator/= i;
            break;
        }
    }
    // 1/2

    if(flag){
        return simplify(num);
    }
    else{
        return num;
    }
}




/*define a function to add two fractions */
// Eg: 10/12 should return 5/6


void main(){

    int n = 2/3;

    Fraction n1 = { 4, 5 };
    Fraction n2 = { 18, 90 };

    printf("\nFraction: ");
    display_fraction(n1);
    printf("\n(is the same as) %f\n", get_fractional_num(n1));

    Fraction simplified = simplify(n2);
    display_fraction(simplified); 
    

}