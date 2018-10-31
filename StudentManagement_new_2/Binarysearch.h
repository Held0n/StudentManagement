/*
 *作者:heldon
 *编写日期：18-10-25
 *功能描述：
 */
#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;
class Binarysearch{

public:

    int binary_search(vector<int> array,int key){



        vector<int>::iterator it = find(array.begin(),array.end(),key);
        if(it == array.end()){
            std::cout<<key<<" is not exist"<<std::endl;
            return -1;
        }
        else{
            std::cout<<"find it"<<std::endl;
            return key;
        }
    }
};
