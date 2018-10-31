/*
 *作者:heldon
 *编写日期：18-10-25
 *功能描述：
 */
#include <iostream>
#include <Subject.h>
//#include <Binarysearch.h>
#include <Operation.h>

int main(){
    
    Subject subject_Math(1200001,"Math");
    Subject subject_English(1343251,"English");
    Subject subject_Computer(14235462,"Computer");
    Subject subject_History(1512354,"History");
    Subject subject_Art(16123613,"Art");
    
    int a[] = {200,305,123,3453,23};
    vector<int>array(a,a+5);
    
    QuickSort *quickSort = new QuickSort();
    Binarysearch *binarySearch = new Binarysearch();
    Operation operation(*quickSort,*binarySearch);
    
    operation.sort(array);
    //quickSort->QSort(array,array.begin(),array.end());
    operation.search(array,233);
    
    for(vector<int>::iterator it = array.begin();it != array.end(); it++){
        std::cout<< *it << std::endl;
    }
}