/*
 *作者:heldon
 *编写日期：18-10-22
 *功能描述：
 */

#include "Compulsory.h"

Compulsory::Compulsory(const string &m_subject_name, float m_points, short m_times,
                       const Option<string> &m_description,
                       const vector<shared_ptr<Teacher>> &mp_teachers) : Subject(m_subject_name, m_points, m_times,
                                                                                 m_description, mp_teachers) {}
