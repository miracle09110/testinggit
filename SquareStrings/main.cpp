#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

int main() {

string str ="";
getline (cin, str);
int l = str.length(); // value for length of string
int substrcounter = 0; // position in substring array
int k = (((l*(l+1))/2)-1); // size of substring array
string substrings [k] = {};
bool x = false;

for (int strcounter=0; strcounter<=l; strcounter++)
    for (int strlength=1; strlength <=l && strlength<= l-strcounter; strlength++){
    substrings[substrcounter]= str.substr(strcounter,strlength);
    substrcounter++;
}


for (int h=1; h<=k; h++) { // h is to denote position of element being compared to other elements
    for (int j=h+1; j<=k; j++){ // j is to denote position of other element being compare too

        if(substrings[h]==substrings[j]){
            x= true;
            break;
        }


}
}

    
int x = 2
    cout << x;
    
    
if (x==true){
cout << str << " -Not Square Free" << endl;
}

else {
    cout << str << " - Square Free" << endl;
    }
}
