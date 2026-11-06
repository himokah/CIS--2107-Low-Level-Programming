//Joshua Okah
//09/21/26
//CIS 2107
//Lab 05 Project: 2D Arrays
// Basically a lab that makes an 2D array. It's able to checks if it's a square array. 
//Checks the sum of each row and column, finds the max value of the array and displays it
#include <stdio.h>
#include <stdlib.h>
void max(int rows, int columns,int arr[rows][columns]){
    int big=arr[0][0];
    for(int i=0;i<rows;i++){
            for(int j=0; j<columns;j++){
                if(arr[i][j]>big){
                    big=arr[i][j];
                }
            }}
    printf("Largest number = %d\n",big);
}
void rowsum(int rows, int columns,int arr[rows][columns]){
    for(int i=0;i<rows;i++){
        int row_sum=0;
        for(int j=0;j<columns;j++){
            row_sum+= arr[i][j];
        }
        int row_num=i+1;
        printf("Sum of Row %d = %d\n", row_num,row_sum);
    }
}
void colsum(int rows, int columns, int arr[rows][columns]){
    for(int j=0; j<columns; j++){
        int col_sum = 0;
        for(int i=0; i<rows; i++){
            col_sum += arr[i][j];
        }
        int col_num = j+1;
        printf("Sum of Column %d = %d\n", col_num, col_sum);
    }
}
void isSquare(int rows, int columns){
    if(rows==columns){
        puts("The array is square.");
} else {
    puts("The array is not square.");
}}
void diisplayoutputs(int rows, int columns,int arr[rows][columns]){
        for(int i=0;i<rows;i++){
            for(int j=0; j<columns;j++){
                int n;
                printf("enter [%d][%d]:", i,j);
                scanf("%d",&n);
                arr[i][j]=n;
            }
    }
    puts("Here is your 2Dim array:");
    for (int i=0;i<rows;i++){
        printf("[");
        for (int j=0;j<columns;j++){
            printf("%d", arr[i][j]);
            if (j < columns - 1) printf(",");
        }
        puts("]");
    }
}
int main(){
    int rows;
    int columns;
    puts("Let's create a 2-D Arrray!");
    printf("How many Rows?:");
    scanf("%d",&rows);
    printf("How many Columns?:");
    scanf("%d",&columns);
    int arr[rows][columns];
    diisplayoutputs(rows,columns, arr);
    rowsum(rows, columns,arr);
    colsum(rows,columns,arr);
    isSquare(rows,columns);
    max(rows,columns,arr);
}