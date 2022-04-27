from typing import List


class CocktailSort:

    def __init__(self, target_list: List[int]):
        self._target_list = target_list
        self._list_len = len(self._target_list)


    def sort(self) -> List:
        left_index = 0
        right_index = self._list_len - 1
        final_index = 0

        while left_index < right_index:
            # Sort the elements of list from left to right
            for _i in range(left_index, right_index):
                if self._target_list[_i] > self._target_list[_i+1]:
                    self.swap(_i, _i+1)
                    final_index = _i

            right_index = final_index

            # Sort the elements of list from right to left
            for _j in range(right_index, left_index, -1):
                if self._target_list[_j - 1] > self._target_list[_j]:
                    self.swap(_j, _j - 1)
                    final_index = _j

            left_index = final_index

        return self._target_list


    def swap(self, i: int, j: int) -> None:
        self._target_list[i], self._target_list[j] = self._target_list[j], self._target_list[i]


if __name__ == '__main__':

    _list = [7, 8, 9, 4, 7, 3, 5, 9, 8]

    print(f"Original list: {_list}")
    _insert_sort = CocktailSort(target_list=_list)
    print("Start to sort ...")
    _sorted_list = _insert_sort.sort()
    print(f"Sorted list: {_sorted_list}")

