#include <iostream>
using namespace std; 

void ReadNumbesIntFromArray(string txtMsgForNumbersOfArr,  int numbersInArrayFromMain[30], string txtMsgForLengthArr, int& lengthOfArrayFromMain){

    // Reading Length 
    cout << txtMsgForLengthArr << "\n";
    cin >> lengthOfArrayFromMain;

    // Reading Numbers in Array
    for (int i = 0; i < lengthOfArrayFromMain; i++)
    {
        cout << txtMsgForNumbersOfArr << "\n";
        cin >> numbersInArrayFromMain[i];
    }
    
}