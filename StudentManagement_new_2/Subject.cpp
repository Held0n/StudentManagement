/*
 *作者:heldon
 *编写日期：18-10-22
 *功能描述：
 */

#include "Subject.h"


Subject::Subject(int m_subject_id,const string &m_subject_name, float m_points,
                 short m_times,const Option<string> &m_description,
                 const vector<shared_ptr<Teacher> > &mp_teachers): m_subject_id(m_subject_id),
                                                                   m_subject_name(m_subject_name),m_points(m_points),
                                                                   m_times(m_times),m_description(m_description),
                                                                   mp_teachers(mp_teachers){}
Subject::Subject(int m_subject_id, const string &m_subject_name):m_subject_id(m_subject_id),
                                                                 m_subject_name(m_subject_name){}
const string &Subject::getM_subject_name() const {
    return m_subject_name;
}

void Subject::setM_subject_name(const string &m_subject_name) {
    Subject::m_subject_name = m_subject_name;
}

float Subject::getM_points() const {
    return m_points;
}

void Subject::setM_points(float m_points) {
    Subject::m_points = m_points;
}

short Subject::getM_times() const {
    return m_times;
}

void Subject::setM_times(short m_times) {
    Subject::m_times = m_times;
}

const Option<string> &Subject::getM_description() const {
    return m_description;
}

void Subject::setM_description(const Option<string> &m_description) {
    Subject::m_description = m_description;
}

const vector<shared_ptr<Teacher>> &Subject::getMp_teachers() const {
    return mp_teachers;
}

void Subject::setMp_teachers(const vector<shared_ptr<Teacher>> &mp_teacher) {
    Subject::mp_teachers = mp_teacher;
}

Subject::~Subject() {

}

int Subject::getM_subject_id() const {
    return m_subject_id;
}

void Subject::setM_subject_id(int m_subject_id) {
    Subject::m_subject_id = m_subject_id;
}


