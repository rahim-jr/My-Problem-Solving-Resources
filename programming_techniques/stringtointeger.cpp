#include <iostream>
#include <string>

using namespace std;

// Function to convert string to integer
int stringToInt(const string& str) {
    return stoi(str);
}

// Function to convert integer to string
string intToString(int num) {
    return to_string(num);
}

int main() {
    // 1. String to Integer
    string strNum = "100";
    int num = stringToInt(strNum); 
    cout << "Integer value: " << num << "\n";

    // 2. Integer to String
    int val = 250;
    string strVal = intToString(val); 
    cout << "String value: " << strVal << "\n";

    return 0;
}