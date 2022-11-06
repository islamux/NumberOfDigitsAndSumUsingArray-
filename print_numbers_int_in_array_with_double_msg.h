#include <iostream>
using namespace std;

// Printing array [using for loop]
void PrintNumberIntInArrayWithDoubleMsg( string msgToPrintForArr,int numberIntInArr[30], string msgToPrintForLengthOfArr, int lengthOfArr){

    int counter = 0;
    int i = 0;
    int sum = 0;

    // Length of array 
    cout << msgToPrintForLengthOfArr << lengthOfArr << "\n";

    for (  i = 0; i < lengthOfArr; i++)
    {
        //cout << numberIntInArr[i] << "\n";
        sum = sum + numberIntInArr[i];
    }
    
    cout << "Digits = " << i << "\n";
    cout  << "Sum of entered numbers: "  <<  sum << endl;

}