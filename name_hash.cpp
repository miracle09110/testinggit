#include <iostream>
#include <string>
#include "console.h"
#include "simpio.h"
#include "string"
#include <string>
using namespace std;

int checkIfValid(string prompt, int input);
void PrintBinary(int number);

int main()
{

    int input = checkIfValid("Input an Integer", 0);

    while (input){
        PrintBinary(input);
        cout << endl;
        input = checkIfValid("Input an Integer", 0);

    }
    cout <<"0" << endl << "Exiting";
    return 0;
}

int checkIfValid(string prompt, int input){
    int num = -1;
    while (num < input){
        num = getInteger(prompt);
    }
    return num;
}

void PrintBinary(int number){

    if (number==1||number==0){
        if (number ==1){
            cout << 1;
        }else{
            cout << 0;
        }

    }else{
        int n = (number/2);
        if (number%2 == 0){
          PrintBinary(n);
          cout << 0;

        }else{
            PrintBinary(n);
            cout << 1;
        }
    }

}


