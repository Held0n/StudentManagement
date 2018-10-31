/*
 * 作者:heldon
 * 编写日期：18-10-23
 * 功能描述：
 */
#ifndef STUDENTMANAGEMENT_NEW_2_CHINESEFACTORY_H
#define STUDENTMANAGEMENT_NEW_2_CHINESEFACTORY_H

#include <Chinese.h>
#include <Student.h>
#include <Teacher.h>

using std::shared_ptr;

/*
 * 类名：ChineseFactory
 * 作者：heldon
 * 编写日期：18-10-23
 * 功能描述：
 * 版本：
 */
class Factory {
public:
    virtual Chinese creat_chinese(shared_ptr<string> name, unsigned int id,int age){
          Chinese chinese(name,id,age);
          return chinese;
    };
    virtual
};

/*class StudentFactory : ChineseFactory{
public:
    void creat(){
        Student student()
    }
};*/


#endif //STUDENTMANAGEMENT_NEW_2_CHINESEFACTORY_H
