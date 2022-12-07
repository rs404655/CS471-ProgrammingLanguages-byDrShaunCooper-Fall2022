// Name: Pratyay Kumar
// Date: 08/28/2022
// Input: ASCII values of my name.
// Output: My name is Pratyay Kumar

#include <stdio.h>
#include <stdlib.h>

// Declared a global variable to see the location of the DATA SEGMENT
int global_variable = 0; 

int main () {

    //======================================================================================================================

    int A[100];
    char *S;

    // Input: Pratyay Kumar 
        A[0] = 80; A[1] = 114; A[2] = 97; A[3] = 116; A[4] = 121; A[5] = 97; A[6] = 121; 
        A[7] = 32; A[8] = 75; A[9] = 117; A[10] = 109; A[11] = 97; A[12] = 114; A[13] = 0;

    S = (char *) A;

    printf("My name is ");

    // Output: Printing 
    int i=0;
    while ( *(S + sizeof(int)*i)  ) {
        printf ("%c", *(S + sizeof(int)*i));
        i += 1;
    }

    printf (".\n");

    //======================================================================================================================

    // For Answers: 

    // Answer for Part 3)a)
            // Using test_variable and malloc just to show the location of Heap
            // The value which will be stored in test_variable is dynamically allocated in Heap. 

        // int *test_variable;
        // test_variable = (int *) malloc(sizeof(int)*100); //Dynamically allocated array.
    
        // printf ("Array A is located at:            %10u: Stack Address\n", &A);
        // printf ("The pointer to A is located at:   %10u: Stack Address\n", &S);
        // printf ("Address of Test_Variable:         %10u: Stack Address\n", &test_variable);
        // printf ("Value of Test_Variable is at:     %10u: Heap Address\n", test_variable);
        // printf ("Address of Global Variable:       %10u: Data Segment Address\n", &global_variable);

}