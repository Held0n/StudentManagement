/*
 *作者:heldon
 *编写日期：18-10-25
 *功能描述：
 */

#include <Operation.h>


Operation::Operation(QuickSort quickSort, Binarysearch binarySearch) : m_quickSort(quickSort),
                                                                       m_binarySearch(binarySearch){}

void Operation::sort(std::vector<int> &array) {

    QuickSort quickSort;

    quickSort.quick_sort(array);
}

int Operation::search(std::vector<int> array, int key) {
    Binarysearch binarySearch;

    return binarySearch.binary_search(array,key);
}

