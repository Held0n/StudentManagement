/*
 * 版权所有:
 * 作者:Heldon
 * 编写日期:2018/10/17
 * 功能描述:
 */
#ifndef STUDENTSMANAGEMENT_CHINESE_H
#define STUDENTSMANAGEMENT_CHINESE_H

#include <iostream>
#include <string.h>
#include <memory>

using std::ostream;
using std::string;
using std::shared_ptr;

/*
 * 类名:Chinese
 * 作者:Heldon
 * 编写日期:2018/10/17
 * 功能描述:类的声明
 * 版本:1.0
 */
class Chinese {
public:
    /*禁用默认的构造函数*/
    Chinese() = delete;

    /*自定义类的构造函数*/
   // explicit Chinese(char* name, unsigned int id, int age);

    /*自定义带智能指针的构造函数*/
    explicit Chinese(shared_ptr<string> name, unsigned int id,int age);
    /*自定义类的拷贝构造函数*/
    Chinese(Chinese &chinese);

    /*自定义的移动构造函数*/
    Chinese(Chinese &&chinese);

    /*获取Chinese的mp_name*/
    shared_ptr<string> get_name()const;
    /*修改Chinese的mp_name*/
    void set_name(shared_ptr<string> name);

    /*获取Chinese的m_id*/
    unsigned int get_id()const;
    /*修改Chinese的m_id*/
    void set_id(unsigned int id);

    /*获取Chinese的m_age*/
    int get_age()const;
    /*修改Chinese的m_age*/
    void set_age(int age);

    /*虚函数*/
    virtual void set_career(const shared_ptr<string> career) {
        mp_career = nullptr;
    }

    /*自定义运算符<<的重载*/
    /*如果 c 是 const 会报错*/
    friend ostream& operator<<(ostream &output,const Chinese& c) {
        output<<"id:"<<c.get_id()<<'\n';
        output<<"name:"<< *c.mp_name <<'\n';
        output<<"age:"<<c.get_age()<<'\n';
    }

    /*自定义运算符=的重载*/
    /*如果chinese 是 const 会报错*/
    void operator=(Chinese& chinese);
    /*自定义析构函数*/
    ~Chinese();

protected:
    shared_ptr<string> mp_career;
    shared_ptr<string> mp_name;
    unsigned int m_id;

private:
    int m_age;
};


#endif //STUDENTSMANAGEMENT_CHINESE_H
