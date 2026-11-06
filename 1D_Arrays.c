//Joshua Okah 
//09/20/26
//CIS 2107
//Lab 04 Project: 1D Arrays
// Basically a lab that makes an array. It's able to reverse the order, find the largest number between a specific range,
//reverse the order within a specifc range, and find a sequence of number near each other
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void fillArray(int arr[], int size, int rand_min, int rand_max) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand_min + rand() % (rand_max - rand_min + 1);
        printf("%d ", arr[i]);
    }
}
int findWithRange(int arr[], int size, int low, int high) {
    if (high < low) {
        printf("Error: high is less than low.\n");
        exit(1);
    }
    if (low < 0 || high >= size) {
        printf("Error: index out of bounds.\n");
        exit(1);
    }
    int big_element = arr[low];
    for (int i = low + 1; i <= high; i++) {
        if (arr[i] > big_element) {
            big_element = arr[i];
        }
    }
    return big_element;
}
void reverseArray(int arr[], int size) {
    printf("The Reverse of the Array:");
    int m = size - 1;
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[m];
        arr[m] = temp;
        m--;
        printf("%d ", arr[i]);
    }
}
void reverseArraywithinselectedrange(int arr[], int size, int low, int high){
    if (high < low) {
        printf("Error: high is less than low.\n");
        exit(1);
    }
    if (low < 0 || high >= size) {
        printf("Error: index out of bounds.\n");
        exit(1);
    }
    printf("The Reverse of the Array:");
    int m = high;
    int j = (high - low) + 1;
    for (int i = low; i < low + j / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[m];
        arr[m] = temp;
        m--;
        printf("%d ", arr[i]);
    }
}
int findsequence(int arr[], int size){
    int a;
    int b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(int i= 0; i<size;i++){
        if(arr[i]== a){
            if(arr[i+1]==b){
                printf("Sequence found at:%d\n",i);
                return i;}
        }
    }
    puts("Sequence not found");
    return -1;
}
int main(){
    srand(time(NULL));

    int size = 40;
    int arr[40];
    printf("The Array is:");
    fillArray(arr, size, 0, 100);
    printf("\n");
    printf("==============================\n");
    int index = findsequence(arr, size);
    printf("==============================\n");
    int maxInRange = findWithRange(arr, size, 10, 19);
    printf("Max in range [10,19] = %d\n", maxInRange);
    printf("==============================\n");
    reverseArray(arr, size);
    printf("\n");
    printf("==============================\n");
    reverseArraywithinselectedrange(arr, size, 5, 14);
    printf("\n");
    printf("==============================\n");

    return 0;
}