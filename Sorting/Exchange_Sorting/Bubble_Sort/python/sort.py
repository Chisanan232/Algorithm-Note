from typing import List


class BubbleSort:

    def __init__(self, target_list: List):
        self._target_list = target_list
        self._list_len = len(self._target_list)


    def sort(self) -> List:
        for _i in range(self._list_len):
            for _j in range(_i + 1, self._list_len):
                if self._target_list[_i] > self._target_list[_j]:
                    self.swap(_i, _j)
        return self._target_list


    def swap(self, i: int, j: int) -> None:
        self._target_list[i], self._target_list[j] = self._target_list[j], self._target_list[i]


if __name__ == '__main__':

    _list = [7, 8, 9, 4, 7, 3, 5, 9, 8]

    print(f"Original list: {_list}")
    _insert_sort = BubbleSort(target_list=_list)
    print("Start to sort ...")
    _sorted_list = _insert_sort.sort()
    print(f"Sorted list: {_sorted_list}")

