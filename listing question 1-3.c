
// fathm_ft.c -- converts 2 fathoms to feet

#include <stdio.h>

int main(void)

{

    int feet, fathoms, cats, pets;//1A.symbolic identifiers feet & fathoms
    //1.B Declarations
    
    printf("Enter the number of cats:\n");
    scanf("%d", &cats);
    
    fathoms = 2;
//1.B lvalue ; rvalue
    feet = 6 * fathoms;
//1.B lvalue  ;  rvalue

    pets = fathoms + cats;
    
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);

    printf("Yes, I said %d feet!\n", 6 * fathoms);
    
    printf("There are a number of %d pets\n", pets);


    return 0;

}
