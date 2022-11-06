#include <iostream>
using namespace std;

// Reading 
#include "read_number_positive_int.h"
// Printing
#include "print_numbers_int_in_array_with_double_msg.h"

/*
 * Read number => 1,2,3,4  
 * print digits = 4 digits
 * */
int main(){

    // Reading Array instead of multi variables 
    int numbersInArray[30];
    int lengthOfArray;

    ReadNumbesIntFromArray("Eneter a number: ", numbersInArray, "Enter a length or array", lengthOfArray);

    // Printing
    // Without using for loop  
    // Using For loop 
    PrintNumberIntInArrayWithDoubleMsg("Enter a number in arr: ", numbersInArray, "Enter a lengtho of arr: ", lengthOfArray);






    return 0;
}
