from typing import List


class InsertSort:

    """
    The time complexity is O(n^2)
    """

    def __init__(self, target_list: List[int]):
        self._target_list = target_list
        self._sorting_list = []


    def sort(self) -> List:
        # 1. Iterator all elements in origin list. -> Get the current element and its index.
        # 2. Check where the current element could be inserted in new list.

        for _target_insert_ele in self._target_list:
            if len(self._sorting_list) == 0:
                self._sorting_list.append(_target_insert_ele)
            else:
                self._insert_ele(_target_insert_ele)
        return self._sorting_list


    def _insert_ele(self, _target_insert_ele: int) -> None:
        for _ele in self._sorting_list:
            if _target_insert_ele < _ele:
                _ele_index = self._sorting_list.index(_ele)
                self._sorting_list.insert(_ele_index, _target_insert_ele)
                break
        else:
            self._sorting_list.append(_target_insert_ele)


if __name__ == '__main__':

    _list = [7, 8, 9, 4, 7, 3, 5, 9, 8]

    print(f"Original list: {_list}")
    _insert_sort = InsertSort(target_list=_list)
    print("Start to sort ...")
    _sorted_list = _insert_sort.sort()
    print(f"Sorted list: {_sorted_list}")
