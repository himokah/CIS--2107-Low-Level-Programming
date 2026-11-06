//Joshua Okah
//10/03/26
//CIS 2107
//Lab 06 Project: ArraysofPointers
//Objective: To design and implement array of function pointer.
//The purpose of this program is to modify existing code related to examslecting
//grades for individual students in a 2D matrix and determining the minimum, maximum, and each average.
// Each of the functions has also been modified to allow for a
// menu-driven interface. This interface is an array of pointers to the functions
#include <stdio.h>
#include <stdlib.h>
void printArray(int students, int exams, int grades[students][exams]);
void minimum(int students, int exams, int grades[students][exams]);
void maximum(int students, int exams, int grades[students][exams]);
void average(int students, int exams, int grades[students][exams]);
int main(){
    void (*processGrades[4])(int, int, int[*][*]) = {printArray, minimum, maximum, average};
    int students;
    int exams;
    printf("How many Students?:");
    scanf("%d",&students);
    printf("How many Exams?:");
    scanf("%d",&exams);
    int grades[students][exams];
    for (int i = 0; i < students; i++){
        for (int j = 0; j < exams; j++){
            printf("enter [%d][%d]:", i, j);
            scanf("%d", &grades[i][j]);
        }
    }
    int choice = 0;
    while (choice != 4){
        printf("\n0.Print the array of grades\n"
               "1.Find the minimum grade\n"
               "2.Find the maximum grade\n"
               "3.Print the average on all tests for each student\n"
               "4.End Program\n");
        scanf("%d", &choice);

        if (choice < 0 || choice > 4){
            printf("Invalid choice, try again.\n");
            exit(1);
        }
        if (choice >= 0 && choice <= 3){
            processGrades[choice](students, exams, grades);
        }}
    printf("Program ended.\n");
}
void printArray(int students, int exams, int grades[students][exams]){
    puts("Here is your 2Dim array:");
    for (int i=0;i<students;i++){
        printf("[");
        for (int j=0;j<exams;j++){
            printf("%d", grades[i][j]);
            if (j < exams - 1) printf(",");
        }
        puts("]");
    }
}
void minimum(int students, int exams, int grades[students][exams]){
    int smallest= grades[0][0];
    for (int i=0;i<students;i++){
        for(int j=0; j<exams;j++){
            if(grades[i][j]<smallest){
                smallest=grades[i][j];
            }
        }
    }
    printf("The smallest value is %d\n", smallest);
}
void maximum(int students, int exams, int grades[students][exams]){
    int biggest= grades[0][0];
    for (int i=0;i<students;i++){
        for(int j=0; j<exams;j++){
            if(grades[i][j]>biggest){
                biggest=grades[i][j];
            }
        }
    }
    printf("The biggest value is %d\n", biggest);
}
void average(int students, int exams, int grades[students][exams]){
    for (int i = 0; i < students; i++){
        int total = 0;
        for (int j = 0; j < exams; j++){
            total += grades[i][j];
        }
        double avg = (double) total / exams;
        printf("The average for student %d is %.2f\n", i, avg);
    }
}