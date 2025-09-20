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
    const int SIZE = 30; 
    array<double, SIZE> testScores; 
    ifstream inputFile("studentTestScores.txt"); 
    
    if(!inputFile.is_open()) { 
        cerr << "Error in opening file"; 
    }

    string line; 
    int i = 0; 
    while(getline(inputFile, line)) { 
        cout << line << endl; 
        testScores[i] = stod(line);
        i++;
    }

    inputFile.close();
    return 0;
}