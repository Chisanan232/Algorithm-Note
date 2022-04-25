//
//  sorting.hpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2022/4/24.
//  Copyright © 2022 Bryant Liu. All rights reserved.
//

#ifndef sorting_hpp
#define sorting_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class InsertSort {
private:
    int len;
    vector<int> list;
    
public:
    InsertSort(vector<int> _list, int _len);
    void insert_sort();
    void out();
};

#endif /* sorting_hpp */
