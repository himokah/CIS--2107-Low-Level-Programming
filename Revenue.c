//Joshua Okah 
//09/02/26
//CIS 2107
//Lab 02 Project 2: Revenue
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    printf("Welcome to \"Temple\" store\n");
    float units;
    float price;
    float total_price;
    printf("Enter Item Price:");
    scanf("%f", &price);
    if (price<=0){
        printf("This is not a valid item price.\n Please run the program again");
        printf("Thank You for using \"Temple\" store\n");
        exit(1);}
    printf("Enter Quantity:");
    scanf("%f", &units);
    if (units<=0||(float)(int)units != units){
        printf("This is not a valid quantity order.\n Please run the program again");
        printf("Thank You for using \"Temple\" store\n");
        exit(1);}
    float discount;
    if (units>=1 && units<= 49){
        discount =0.0;
    }
    if (units>=50 && units<= 99){
        discount =10.0;
    }
    if (units>=100 && units<= 149){
        discount =15.0;
    }
    if (units>=150){
        discount =25.0;
    }
    float cost = price * units;
    float discount_amount = cost * (discount / 100.0);
    total_price = cost - discount_amount;
 
    printf("The item price is: $%.1f\n", price);
    printf("The order is: %.0f item(s)\n", units);
    printf("The cost is: $%.1f\n", cost);
    printf("The discount is: %.1f%%\n", discount);
    printf("The discount amount is: $%.1f\n", discount_amount);
    printf("The total is: $%.1f\n", total_price);
    printf("Thank You for using \"Temple\" store\n");
 
}