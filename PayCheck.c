//Joshua Okah 
//09/02/26
//CIS 2107
//Lab 02 Project 1: PayCheck
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    printf("Welcome to \"TEMPLE HUMAN RESOURCES\"\n");
    float employee_number;
    float hours;
    float regular_pay;
    float overtime_hours=0;
    printf("Enter Employee Number:");
    scanf("%f", &employee_number);
    if (employee_number<=0||(float)(int)employee_number != employee_number){
        printf("This is not a valid Employee Number.\n Please run the program again");
        printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }
    //Pay_Calculation
    printf("Enter Hourly Salary:");
    scanf("%f", &regular_pay);
    if (regular_pay<=0){
        printf("This is not a valid hourly salary amount.\n Please run the program again");
        printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }
    printf("Enter the Weekly Time:");
    scanf("%f",&hours);
    if (hours<=0){
        printf("This is not a weekly time.\n Please run the program again");
        printf("Thank you for using \"TEMPLE HUMAN RESOURCES\"\n");
        exit(1);
    }
    float straight_hours = hours;
    if (hours >= 40){
       overtime_hours = hours - 40.0;
       straight_hours = 40.0;
    }
    float overtime = regular_pay*1.5;
    float over_time_pay=overtime*overtime_hours;
    float regular_pay_amount = straight_hours * regular_pay;
    float netpay = regular_pay_amount + over_time_pay;
    printf("==============================\n");
    printf("Employee Number: %.09f\n",employee_number);
    printf("Hourly Salary: %.2f\n", regular_pay);
    printf("Weekly Time: %.2f\n", hours);
    printf("Regular Pay: %.2f\n",regular_pay_amount);
    printf("Overtime Pay: %.2f\n", over_time_pay);
    printf("Net Pay: %.2f\n",netpay);
}