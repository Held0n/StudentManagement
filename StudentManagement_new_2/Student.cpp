/*
 * 版权所有:深圳先进研究所异构智能计算体系结构与系统研究中心
 * 作者:Heldon
 * 编写日期:2018/10/18
 * 功能描述:
 */
#include <cstring>
#include <Chinese.h>
#include <Student.h>


Student::Student(shared_ptr<string> name, unsigned int id, int age):Chinese(name,id,age) {

}

Student::Student(shared_ptr<string> name, unsigned int id, int age, vector<string> compulsory_subjects, vector<string> elective_subjects):Chinese(name,id,age),m_compulsory_subjects(compulsory_subjects),m_elective_subjects(elective_subjects) {

}

Student::Student(Student &s):Chinese(s) {
    m_compulsory_subjects = s.m_compulsory_subjects;
    m_elective_subjects = s.m_elective_subjects;
}

void Student::set_head(const shared_ptr<Teacher> head) {
    Student::head = head;
}

const shared_ptr<Teacher> Student::get_head(){
    return head;
}

Student::~Student() {
    m_compulsory_subjects.clear();
    m_elective_subjects.clear();
}

void Student::set_career(const shared_ptr<string> career) {
    /*int temp_len = strlen(career);
    mp_career = nullptr;
    mp_career = new char[temp_len];
    strcpy(mp_career, career);*/
    mp_career = career;
}

string Student::get_career() {
    shared_ptr<string> str = mp_career;
    return *str;
}