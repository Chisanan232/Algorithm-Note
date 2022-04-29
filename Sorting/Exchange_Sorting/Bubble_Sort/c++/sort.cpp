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


BubbleSort::BubbleSort(vector<int> _list, int _len) {
    for (int i=0; i<_len; i++) list.push_back(_list[i]);
    this->len = _len;
}


void BubbleSort::bubble_sort() {
    for (int i=0; i<len; i++) {
        for (int j=i+1; j<len; j++) {
            if (list[i] > list[j]) swap(i, j);
        }
    }
}


void BubbleSort::swap(int i, int j) {
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}


void BubbleSort::out() {
    for (auto const &i : list) {
        std::cout << i << std::endl;
    }
}


//int main(int argc, const char * argv[]) {
//    vector<int> myList= {4, 6, 2, 7, 5, 2, 4, 3, 6, 2, 3, 5, 6};
//
//    BubbleSort sort(myList, 13);
//    cout << "Before sorting" << endl;
//    sort.out();
//
//    cout << "Start to sort ..." << endl;
//    sort.bubble_sort();
//
//    cout << "After sorting" << endl;
//    sort.out();
//
//    return 0;
//}


