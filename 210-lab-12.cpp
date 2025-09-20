// COMSC210 | Lab 12 | Majd Bohsali
// IDE used: Visual Studio Code

#include <iostream>
#include <algorithm>  // for sort(), find()
#include <numeric>    // for accumulate()
#include <array>
#include <fstream>
#include <iostream> 
#include <string> 
using namespace std;

int main() { 
    ifstream inputFile("studentTestScores.txt"); 
    
    if(!inputFile.is_open()) { 
        cerr << "Error in opening file"; 
    }

    string line; 
    while(getline(inputFile, line)) { 
        cout << line << endl; 
    }

    inputFile.close();
    return 0;
}