//
//  sorting.cpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2022/4/24.
//  Copyright © 2022 Bryant Liu. All rights reserved.
//

#include "sorting.hpp"
#include <iostream>
#include <vector>
#include <list>

using namespace std;

InsertSort::InsertSort(vector<int> _list, int _len) {
    for (int i=0; i<_len; i++) {
        list.push_back(_list[i]);
    }
    this -> len = _len;
}


void InsertSort::insert_sort() {
    int insertNum;
    for (int i=0; i<len; i++) {
        insertNum = list[i];
        int j = i;
        while (j>0 && insertNum<list[j-1]) {
            list[j] = list[j-1];
            j--;
        }
        list[j] = insertNum;
    }
}


void InsertSort::out() {
    for (auto const &i : list) {
        std::cout << i << std::endl;
    }
}


//int main(int argc, const char * argv[]) {
//    vector<int> myList= {4, 6, 2, 7, 5, 2, 4, 3, 6, 2, 3, 5, 6};
//
//    InsertSort sort(myList, 10);
//    cout << "Before sorting" << endl;
//    sort.out();
//
//    cout << "Start to sort ..." << endl;
//    sort.insert_sort();
//
//    cout << "After sorting" << endl;
//    sort.out();
//
//    return 0;
//}

