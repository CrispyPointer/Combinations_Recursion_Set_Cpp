/*
 testP1.cpp
 
 INSTRUCTIONS:
 This main file just lets you run and test your code. It will not be submitted. Feel free to add your own tests. This file will not run until you implement the combinations(n, k) function. 
 
 Create your own P1.cpp file. Complete the necessary code.
 */

#include <iostream>
#include "P1.h"

using namespace std;

void vecVecPrinter(const vector<vector<int>>& v) {
    cout << "{ ";
    for(vector<int> u : v) {
        cout << "( ";
        for(int x : u) {
            cout << x << " ";
        }
        cout << "), ";
    }
    cout << "}" << endl;
}


int main() {
    //Your code should function correctly. To help you with this process, make sure it can run this main file.
    vector<vector<int>> v1 = combinations(4, 3);
    vecVecPrinter(v1);

    // vector<vector<int>> v2 = combinations(5, 2);
    // vecVecPrinter(v2);

    // vector<vector<int>> v3 = combinations(3, 3);
    // vecVecPrinter(v3);
    
    vector<vector<int>> v4 = combinations(8, 4);
    vecVecPrinter(v4);
    
    // vector<vector<int>> v5 = combinations(16, 8);
    // vecVecPrinter(v5);
    
    //Feel free to come up with other tests
    
    return 0;
}
