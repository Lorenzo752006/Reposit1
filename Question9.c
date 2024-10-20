#include <stdio.h>
//Write a simple inventory program that keeps track of A3, A4,
//and A5-sized paper stock. All three stocks should be initialized to 1,000 packs.
//The program lets the user place an order that includes the amount of paper packs
//per size. Prior to termination the program displays the order details as well
//as the updated stock amounts.

int main(void) {
    int A3 = 1000, A4 = 1000, A5 = 1000;
    int A3client = 0, A4client = 0, A5client = 0;

    printf("How many paper packs of A3 paper would you like to buy?\n");
    scanf("%d", &A3client);

    printf("How many paper packs of A4 paper would you like to buy?\n");
    scanf("%d", &A4client);

    printf("How many paper packs of A3 paper would you like to buy?\n");
    scanf("%d", &A5client);

    A3 = A3 - A3client;
    A4 = A4 - A4client;
    A5 = A5 - A5client;

    printf("Your order consits of - A3: %d, A4: %d, A5: %d\n", A3client, A4client, A5client);
    printf("Stocks remainig - A3: %d, A4: %d, A5: %d\n", A3, A4, A5);

    return 0;
}
