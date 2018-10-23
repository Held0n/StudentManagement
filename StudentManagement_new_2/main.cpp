#include <iostream>
#include <cstdio>
#include <memory>
#include <Chinese.h>
#include <Student.h>

using std::cout;
using std::cin;
using std::endl;
using std::make_shared;
using std::unique_ptr;
int main(){
        string name = "xiao_ming";
        shared_ptr<string> my_name = make_shared<string>(name);
        unsigned int my_id=1;
        int age = 24;
        Chinese xiao_ming(my_name, my_id,age);
        // 堆上分配内存
        //    Chinese* xiao_p = new Chinese(my_name,my_id,age);
        //    delete xiao_p;
        cout<<"使用智能指针"<<endl;
        unique_ptr<Chinese> xiao_unique_p(new Chinese(my_name,my_id,age));
        cout<<*xiao_unique_p<<endl;
        string zhang_name = "zhanghongtai";
        shared_ptr<string> zhanghongtai_name =  make_shared<string>(zhang_name);
/*
        unique_ptr<Chinese> zhang_p = make_unique<Chinese>(Chinese(zhanghongtai_name,my_id,age));
*/
        cout<<*zhanghongtai_name<<endl;
        cout<<"使用智能指针结束"<<endl;

        cout<<xiao_ming<<endl;
        shared_ptr<string> xiao_ming_name = xiao_ming.get_name();
        cout<<*xiao_ming_name<<endl;

        // 拷贝构造函数测试
        cout<<"拷贝构造函数测试"<<endl;
        Chinese xiao_ming_copy(xiao_ming);

        string name_1 = "heldon";
        shared_ptr<string> name_1_ptr = make_shared<string>(name_1);
        Student student_heldon(name_1_ptr,6,22);

        vector<string> t_subjects;
        t_subjects.push_back("Math");

        shared_ptr<string> name_2_ptr = make_shared<string>("teacher_li");
        Teacher teacher_li(name_2_ptr,12,34,t_subjects);
        shared_ptr<Teacher> li_ptr = make_shared<Teacher>(teacher_li);

        student_heldon.set_head(li_ptr);
        student_heldon.print_student_and_head_relationship();

    }