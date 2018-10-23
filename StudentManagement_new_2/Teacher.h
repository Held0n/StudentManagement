/*
 * 版权所有:深圳先进研究所异构智能计算体系结构与系统研究中心
 * 作者:Heldon
 * 编写日期:2018/10/17
 * 功能描述:
 */
#ifndef STUDENTSMANAGEMENT_NEW_2_TEACHER_H
#define STUDENTSMANAGEMENT_NEW_2_TEACHER_H

#include <vector>
#include <Chinese.h>
#include <stout/option.hpp>
#include <functional>

typedef std::function<void (string &,string &)> Fun;
using std::vector;
using std::string;


/*
 * 类名:Teacher
 * 作者:Heldon
 * 编写日期:2018/10/17
 * 功能描述:类的声明
 * 版本:1.0
 */
class Teacher : public Chinese{
public:
    /*自定义类的初始化列表*/
    explicit Teacher(shared_ptr<string> name ,unsigned int id, int age, vector<string> subjects);

    /*自定义拷贝函数*/
    Teacher(Teacher &teacher);

    /*自定义赋值运算符*/
    void operator=(Teacher& teacher);

    /*自定义移动构造函数*/
    Teacher(Teacher && teacher);

    /*自定义移动构造函数*/
    string get_career();

    /*虚函数覆盖*/
    void set_career(const shared_ptr<string> career);

    /*与student之间的回调*/
    void call (string a,Fun f){
        string name = *this->mp_name;
        //std::cout<< "Teacher.h" << *this->mp_name ;  (teacher_li)

        f(name, a);
    }

    /*自定义析构函数*/
    virtual ~Teacher();

private:
    vector<string> m_subjects;

};


#endif //STUDENTSMANAGEMENT_TEACHER_H
