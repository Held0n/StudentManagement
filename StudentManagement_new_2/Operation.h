/*
 * 作者:heldon
 * 编写日期：18-10-25
 * 功能描述：
 */
#ifndef STUDENTMANAGEMENT_NEW_2_DATAOPERATION_H
#define STUDENTMANAGEMENT_NEW_2_DATAOPERATION_H

#include <vector>
#include <Binarysearch.h>
#include <Quicksort.h>

/*
 * 类名：DataOperation
 * 作者：heldon
 * 编写日期：18-10-25
 * 功能描述：
 * 版本：
 */
class DataOperation {
public:
    virtual void sort(std::vector<int> &array) = 0;
    virtual int search(std::vector<int> array ,int key) = 0;

private:
    QuickSort m_quickSort;
    Binarysearch m_binarySearch;
};

class Operation : public DataOperation{

public:
    Operation(QuickSort quickSort,Binarysearch binarySearch);

    void sort(std::vector<int> &array);

    int search(std::vector<int> array ,int key);

private:

    QuickSort m_quickSort;
    Binarysearch m_binarySearch;

};

#endif //STUDENTMANAGEMENT_NEW_2_DATAOPERATION_H
