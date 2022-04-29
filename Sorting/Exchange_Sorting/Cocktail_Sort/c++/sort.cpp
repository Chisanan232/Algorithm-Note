//
//  sort.cpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2022/4/24.
//  Copyright © 2022 Bryant Liu. All rights reserved.
//

#include "sort.hpp"

#include <vector>
#include <iostream>

using namespace std;

CocktailSort::CocktailSort(vector<int> _list, int _len) {
    for (int i=0; i<_len; i++) list.push_back(_list[i]);
    this->len = _len;
}


void CocktailSort::cocktail_sort() {
    int i, left = 0, right = len - 1, shift = 0;
    
    while(left < right) {
        for (i = left; i < right; i++) {
            if (list[i] > list[i+1]) {
                swap(i, i+1);
                shift = i;
            }
        }
        
        right = shift;
        
        for (i = right; i > left; i--) {
            if (list[i] < list[i-1]) {
                swap(i, i-1);
                shift = i;
            }
        }
        
        left = shift;
    }
}


void CocktailSort::swap(int i, int j) {
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}


void CocktailSort::out() {
    for (auto const &i : list) {
        std::cout << i << std::endl;
    }
}


//int main(int argc, const char * argv[]) {
//    vector<int> myList= {4, 6, 2, 7, 5, 2, 4, 3, 6, 2, 3, 5, 6};
//
//    CocktailSort sort(myList, 13);
//    cout << "Before sorting" << endl;
//    sort.out();
//
//    cout << "Start to sort ..." << endl;
//    sort.cocktail_sort();
//
//    cout << "After sorting" << endl;
//    sort.out();
//
//    return 0;
//}

