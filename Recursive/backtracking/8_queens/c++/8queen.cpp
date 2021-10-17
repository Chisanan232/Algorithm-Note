//
//  8queen.cpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2021/10/14.
//  Copyright © 2021 Bryant Liu. All rights reserved.
//

#include <iostream>
#include "8queen.hpp"


using namespace std;

#define MAX 8

int sum = 0;
class QueenPuzzle {
    // Saving every queen column index.
    int queens[MAX];
    bool queensHandles[MAX];

    public:
        void printOut();
        int IsValid (int n);
        void placeQueen(int i);
};


void QueenPuzzle::printOut() {
    for (int i=0; i<MAX; i++) {
        for (int j=0; j<MAX; j++) {
            if (j == queens[i]) {
                cout << "Q ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
//    cout << endl << "Click 'Q' to quit, click others to continue ...";
    
//    if (getchar() == 'q') {
//        exit(0);
//    }
}


void QueenPuzzle::placeQueen(int i) {
    // Check wether the Queen already has placce or not. If it does, try to next place base on the index.
    int startColumnIndex = 0;
    if (queens[i] != 0) {
        startColumnIndex = queens[i] + 1;
    }
    
//    cout << "Current checking row index: " << sum << i << endl;
//    cout << "At column index: " << sum << queens[i] << endl;

    // Place queen at row index i.
    for (int j=startColumnIndex; j<=MAX; j++) {
//        cout << "The index j: " << sum << j << endl;
        // I cannot understand that what thing it want to do at this determine condition.
//        if (j == MAX) {
//            sum ++;
//            printOut();
//
//            return;
//        }
        
        // Place a queen.
        queens[i] = j;
        queensHandles[i] = true;
        
        // The place cannot place a queen, keep trying next one.
        int isValidFlag = IsValid(i);
        if (isValidFlag) {
            // Check whether it try all place or not.
            if (isValidFlag && j == MAX) {
                cout << "Base on all the places we set before, we cannot reach the solution." << endl;
                cout << "Back to previous one Queen to find another one way." << endl;
                printOut();

                queens[i] = 0;
                queensHandles[i] = false;
                placeQueen(i-1);
            } else {
                // Keep trying next one to check if it's an invalid place.
                placeQueen(i+1);
            }
        } else {
            if (j == MAX) {
                cout << "Base on all the places we set before, we cannot reach the solution." << endl;
                cout << "Back to previous one Queen to find another one way." << endl;
                printOut();

                queens[i] = 0;
                queensHandles[i] = false;
                placeQueen(i-1);
            }
        }
//        else {
//            // In other words, it's a valid place.
//            cout << "This is an invalid place at column " << sum << queens[i] << "." << endl;
//        }
    }
    
    bool *falseIndex = std::find(std::begin(queensHandles), std::end(queensHandles), false);
    if (falseIndex == std::end(queensHandles)) {
        cout << "All row already been tried and set." << endl;
        cout << "We got the soluton! Please refer below chart: " << endl;
        printOut();
        
        cout << endl << "Click 'Q' to quit, click others to continue ...";
        if (getchar() == 'q') {
            exit(0);
        }

        return;
    } else {
        cout << "It still has some row doesn't be handled, keep trying." << endl;
    }

}


int QueenPuzzle::IsValid(int n) {
    // Checking whether the place which the queen at is valid or not.

    // Compare the places with n and n-1 queens at.
    for (int i=0; i < n; i++) {

        // Both of them are at the same place, it's invalid.
        if (queens[i] == queens[n]) {
            return 0;
        }
        
        // Both of them are at diagonal, it's invlid, too.
        if (abs(queens[i] - queens[n]) == abs(n - i)) {
            return 0;
        }
    }
    
    // No conflict, it's valid!
    return 1;
}


int main(int argc, const char * argv[]) {
    // Print Hello World to test...
    cout << "Hello, World!\n";
    cout << "This is C code. \n";
    
    // Start to run 8 Queen question.
    QueenPuzzle queen;
    queen.placeQueen(0);
//    for (int i=0; i<10; i++) {
//        queen.placeQueen(i);
//        cout << "Total has " << sum << " solutions" << endl;
//    }
    
    return 0;
}
