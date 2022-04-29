//
//  sort.hpp
//  KobeXCodeCProject
//
//  Created by Bryant Liu on 2022/4/24.
//  Copyright © 2022 Bryant Liu. All rights reserved.
//

#ifndef sort_hpp
#define sort_hpp

#include <stdio.h>

#include <vector>

using namespace std;

class BubbleSort {
private:
    vector<int> list;
    int len;
    
public:
    BubbleSort(vector<int> _list, int _len);
    void bubble_sort();
    void swap(int i, int j);
    void out();
};

#endif /* sort_hpp */
