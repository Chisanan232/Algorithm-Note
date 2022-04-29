//
//  sort.cpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2022/4/24.
//  Copyright © 2022 Bryant Liu. All rights reserved.
//

#include "sort.hpp"

#include <iostream>
#include <vector>

using namespace std;

SelectSort::SelectSort(vector<int> _list, int _len) {
    for (int i=0; i<_len; i++) {
        list.push_back(_list[i]);
    }
    this->len = _len;
}


void SelectSort::select_sort() {
    int k;
    for (int i=0; i<len; i++) {
        k = i;
        for (int j=i+1; j<len; j++) {
            if (list[j] < list[k]) k = j;
        }
        swap(i, k);
    }
}


void SelectSort::swap(int i, int j) {
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}


void SelectSort::out() {
    for (auto const &i : list) {
        std::cout << i << std::endl;
    }
}


//int main(int argc, const char * argv[]) {
//    vector<int> myList= {4, 6, 2, 7, 5, 2, 4, 3, 6, 2, 3, 5, 6};
//
//    SelectSort sort(myList, 10);
//    cout << "Before sorting" << endl;
//    sort.out();
//
//    cout << "Start to sort ..." << endl;
//    sort.select_sort();
//
//    cout << "After sorting" << endl;
//    sort.out();
//
//    return 0;
//}

