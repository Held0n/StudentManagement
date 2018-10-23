/*
 * 版权所有:深圳先进研究所异构智能计算体系结构与系统研究中心
 * 作者:Heldon
 * 编写日期:2018/10/17
 * 功能描述:
 */
#include <string.h>
#include <Chinese.h>

using std::make_shared;

using std::cout;
using std::endl;
using std::string;

/*
 * 函数名:Chinese
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: name,id,age
 * 功能描述: Chinese的带参构造函数
 */
/*Chinese ::Chinese(char* name, unsigned int id, int age) : m_id(id) ,m_age(age){
    *//*int temp_len = strlen(name);
    mp_career = nullptr;
    mp_name = new char[temp_len];
    strcpy(mp_name ,name);*//*
};*/

/*
 * 函数名:Chinese
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: name,id,age
 * 功能描述: Chinese的带智能指针的带参构造函数
 */
Chinese::Chinese(shared_ptr<string> name, unsigned int id, int age):m_id(id),m_age(age) {
    mp_career = nullptr;
    mp_name = name;
}
/*
 * 函数名:Chinese
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: Chinese &chinese
 * 功能描述: Chinese的拷贝构造函数
 */
Chinese :: Chinese(Chinese &chinese){
    mp_name.reset();  /*释放 mp_name 所指的对象，引用计数 -1*/
    if(chinese.mp_name == nullptr)
        mp_name == nullptr;
    else{
        /*int temp_len = strlen(*chinese.mp_name);
        *//*重新分配内存*//*
        mp_name = make_shared<char *>(new char(temp_len));
        strcpy(*mp_name, *chinese.mp_name);*/
        mp_name = chinese.mp_name;
    }

    mp_career.reset();
    if(chinese.mp_career == nullptr)
        mp_career = nullptr;
    else{
        /*int temp_len = strlen(*chinese.mp_career);
        mp_career = make_shared<char *>(new char(temp_len));
        *//*memset(void *s, int ch, size_t n) : 将s 中当前的n个字节用 ch替换并返回 s*//*
        memset(mp_career.get(),0,temp_len);
        strcpy(*mp_career,*chinese.mp_career);*/
        mp_career = chinese.mp_career;
    }

    m_id = chinese.m_id ;
    m_age = chinese.m_age;
}

/*
 * 函数名:~Chinese
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: 无
 * 功能描述: Chinese的析构构造函数。删除为mp_name创造的空间
 */
Chinese::~Chinese() {
/*
    if (mp_name != nullptr)
        delete mp_name;
*/
cout<<"xigou"<<endl;
}

/*
 * 函数名:get_name
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: 无
 * 返回值: 返回Chinese的成员变量mp_name
 */
shared_ptr<string> Chinese ::get_name()const {
    return mp_name;
}

/*
 * 函数名:set_name
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: const char* name
 * 功能描述: 修改Chinese的成员变量mp_name
 */
void Chinese ::set_name(const shared_ptr<string> name) {
    mp_name = name;
}

/*
 * 函数名:get_id
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: 无
 * 返回值: 返回Chinese的成员变量m_id
 */
unsigned int Chinese ::get_id()const {
    return m_id;
}

/*
 * 函数名:set_id
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: unsignes int id
 * 功能描述: 修改Chinese的成员变量m_id
 */
void Chinese ::set_id(unsigned int id) {
    this->m_id = id;
}

/*
 * 函数名:get_age
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: 无
 * 返回值: 返回Chinese的成员变量m_age
 */
int Chinese ::get_age()const {
    return m_age;
}

/*
 * 函数名:set_age
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: int age
 * 功能描述: 修改Chinese的成员变量m_age
 */
void Chinese ::set_age(int age) {
    this->m_age = age;
}

/*
 * 函数名:operapr=
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: Chinese &chinese
 * 功能描述: 重载赋值运算符 =
 */
void Chinese ::operator=(Chinese &chinese) {
    mp_name.reset();  /*释放 mp_name 所指的对象，引用计数 -1*/
    if(chinese.mp_name == nullptr)
        mp_name == nullptr;
    else{
        /*int temp_len = strlen(*chinese.mp_name);
        *//*重新分配内存*//*
        mp_name = make_shared<char *>(new char(temp_len));
        strcpy(*mp_name, *chinese.mp_name);*/
        mp_name = chinese.mp_name;
    }

    mp_career.reset();
    if(chinese.mp_career == nullptr)
        mp_career = nullptr;
    else{
        /*int temp_len = strlen(*chinese.mp_career);
        mp_career = make_shared<char *>(new char(temp_len));
        *//*memset(void *s, int ch, size_t n) : 将s 中当前的n个字节用 ch替换并返回 s*//*
        memset(mp_career.get(),0,temp_len);
        strcpy(*mp_career,*chinese.mp_career);*/
        mp_career = chinese.mp_career;
    }

    m_id = chinese.m_id ;
    m_age = chinese.m_age;
}

/*
 * 函数名:Chinese
 * 作者:heldon
 * 编写日期: 2018/10/17
 * 输入参数: Chinese &&chinese
 * 功能描述: Chinese的移动构造函数
 */
/*
Chinese ::Chinese(Chinese &&chinese):mp_name(chinese.mp_name),m_id(chinese.m_id),m_age(chinese.m_age){
    chinese.mp_name= nullptr;
}*/
