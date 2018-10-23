/*
 * 版权所有:深圳先进研究所异构智能计算体系结构与系统研究中心
 * 作者:Heldon
 * 编写日期:2018/10/17
 * 功能描述:
 */
#include <vector>
#include <Chinese.h>
#include <Teacher.h>
 using std::vector;
 using std::string;
 using std::cout;
 using std::endl;

/*
* 函数名:Teacher
* 作者:heldon
* 编写日期: 2018/10/17
* 输入参数: Teacher
* 功能描述: Teacher的构造函数
*/
 Teacher::Teacher(shared_ptr<string>name, unsigned int id, int age, vector<string> subjects):Chinese(name,id ,age),m_subjects(subjects){
     cout<<"Teacher的构造函数被调用"<<endl;
 }

/*
* 函数名:Teacher
* 作者:heldon
* 编写日期: 2018/10/17
* 输入参数: Teacher &teacher
* 功能描述: Teacher的拷贝构造函数
*/
 Teacher::Teacher(Teacher &teacher):Chinese(teacher){
     m_id = teacher.m_id;

     /*int temp_len = strlen(teacher.mp_name);
     mp_name = new char[temp_len];
     strcpy(mp_name,teacher.mp_name);*/
     mp_name = teacher.mp_name;
     m_subjects.assign(teacher.m_subjects.begin(),teacher.m_subjects.end());
 }

/*
* 函数名:operator=
* 作者:heldon
* 编写日期: 2018/10/17
* 输入参数: Teacher &teacher
* 功能描述: 重载赋值运算符 =
*/
 void Teacher::operator=(Teacher &teacher) {
     m_id = teacher.m_id;

     /*int temp_len = strlen(teacher.mp_name);
     mp_name = new char[temp_len];
     strcpy(mp_name,teacher.mp_name);*/
     mp_name = teacher.mp_name;
     m_subjects.assign(teacher.m_subjects.begin(),teacher.m_subjects.end());
 }

/*
* 函数名:Teacher
* 作者:heldon
* 编写日期: 2018/10/17
* 输入参数: Teacher &&teacher
* 功能描述: Teacher的移动构造函数
*/
 Teacher::Teacher(Teacher &&teacher) :Chinese(teacher){
     teacher.mp_name = nullptr;
     m_subjects.clear();
 }

/*
* 函数名:set_career
* 作者:heldon
* 编写日期: 2018/10/17
* 输入参数: const char *career
* 功能描述: 修改teacher 的 career
*/
 void Teacher::set_career(const shared_ptr<string> career) {
     this->mp_career = career;
 }

/*
* 函数名:get_career
* 作者:heldon
* 编写日期: 2018/10/17
* 输入参数: const char *career
* 功能描述: 修改teacher 的 career
*/
string Teacher::get_career() {
    return *mp_career;
}

 Teacher::~Teacher() {
/*     if (mp_name != nullptr)
         delete(mp_name);*/
 }