/*
 * 版权所有:
 * 作者:Heldon
 * 编写日期:2018/10/18
 * 功能描述:
 */
#ifndef STUDENTSMANAGEMENT_STUDENT_H
#define STUDENTSMANAGEMENT_STUDENT_H


/*
 * 类名:Student
 * 作者:Heldon
 * 编写日期:2018/10/18
 * 功能描述:类的声明
 * 版本:1.0
 */
#include <vector>
#include <string>
#include <boost/bind/bind.hpp>

#include <Chinese.h>
#include <Teacher.h>

using std::string;
using std::vector;
using std::make_shared;

typedef std::function<void (string &,string &)> Fun;

class Student :public Chinese{

public:
    explicit Student(shared_ptr<string> name, unsigned int id, int age);

    explicit Student(shared_ptr<string> name, unsigned int id, int age, vector<string> compulsory_subjects, vector<string> elective_subjects);

    Student(Student& s);

    string get_career();

    // 虚函数重写
    void set_career(const shared_ptr<string> career) override;

    /*析构函数*/
    virtual ~Student();

    /*修改学生的班主任*/
    void set_head(const shared_ptr<Teacher> head);

    /*获取学生的班主任*/
    const shared_ptr<Teacher> get_head();

    /*回调函数*/
    void print_callback(string &t,string &s){
        std::cout << s << " is a student of teacher " << t << std::endl;
    }
    void print_student_and_head_relationship(){
        Fun fun = bind(&Student::print_callback,this,_1,_2);
        //Teacher head = *this->get_head();

        //std::cout << "Student.h"<< this->mp_name <<  *mp_name;
        head->call(*this->get_name(),fun);
        std::cout<< "" <<std::endl;
        std::cout<< *this->get_name() <<std::endl;
    }

protected:

private:
    vector<string> m_compulsory_subjects;
    vector<string> m_elective_subjects;
    /*head */
    shared_ptr<Teacher> head;

};



#endif //STUDENTSMANAGEMENT_STUDENT_H
