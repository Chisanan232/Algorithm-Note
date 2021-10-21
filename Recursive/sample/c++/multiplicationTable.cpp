//
//  multiplicationTable.cpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2021/10/20.
//  Copyright © 2021 Bryant Liu. All rights reserved.
//

#include <iostream>
#include "multiplicationTable.hpp"

using namespace std;


class MultiplicationTable {
    int startNumber = 1;
    int finalMultipliverEndNumber = 1;
    int finalMultiplicandEndNumber = 1;
    
public:
    void generate(int finalMultipliver, int finalMultiplicand);
    void doMultiplicationProcess(int multipliver, int multiplicand);
};


void MultiplicationTable::generate(int finalMultipliver, int finalMultiplicand) {
    finalMultipliverEndNumber = finalMultipliver;
    finalMultiplicandEndNumber = finalMultiplicand;
    doMultiplicationProcess(startNumber, startNumber);
}


void MultiplicationTable::doMultiplicationProcess(int multipliver, int multiplicand) {
    
    if (multiplicand >= startNumber && multiplicand <= finalMultiplicandEndNumber) {
        int result = multipliver * multiplicand;
        cout << multipliver << " * " << multiplicand << " = " << result << endl;
        doMultiplicationProcess(multipliver, multiplicand + 1);
    } else {
        if (multipliver == finalMultipliverEndNumber) {
            cout << "Finish multiplication table by C++ !" << endl;
            return ;
        } else {
            doMultiplicationProcess(multipliver + 1, startNumber);
        }
    }
    
}


int main(int argc, const char * argv[]) {
    // Start to run 8 Queen question.
    MultiplicationTable multiplicationTable;
    multiplicationTable.generate(9, 9);

    return 0;
}
