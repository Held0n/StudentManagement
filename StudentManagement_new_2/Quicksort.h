/*
 *作者:heldon
 *编写日期：18-10-25
 *功能描述：
 */
#include <vector>
#include <algorithm>


using std::vector;

 class QuickSort{

 public:

     void quick_sort(vector<int> &array) {

         std::cout<<"order"<<std::endl;
         //sort(array.begin(),array.end());  /*升序排列*/
         std::sort(array.begin(),array.end());
     }
 };
