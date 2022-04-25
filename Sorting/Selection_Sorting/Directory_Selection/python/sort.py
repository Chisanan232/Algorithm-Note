from typing import List


class SelectSort:

    def __init__(self, target_list):
        self._sorted_list: List = target_list
        self._list_len: int = len(self._sorted_list)


    def sort(self) -> List:
        # 1. Select the element which is minimum of the list[len - i:].
        # 2. Swap the elements.
        # 3. Try to next one and repeat step 1-2.
        for _i in range(self._list_len):
            _rest_list = self._sorted_list[_i:]
            _min_ele = min(_rest_list)
            _min_ele_index = _rest_list.index(_min_ele)
            self.swap(_i, _min_ele_index + _i)
        return self._sorted_list


    def swap(self, i: int, j: int) -> None:
        self._sorted_list[j], self._sorted_list[i] = self._sorted_list[i], self._sorted_list[j]


if __name__ == '__main__':

    _list = [7, 8, 9, 4, 7, 3, 5, 9, 8]

    print(f"Original list: {_list}")
    _insert_sort = SelectSort(target_list=_list)
    print("Start to sort ...")
    _sorted_list = _insert_sort.sort()
    print(f"Sorted list: {_sorted_list}")
