/*
 * 作者:heldon
 * 编写日期：18-10-22
 * 功能描述：
 */
#ifndef STUDENTMANAGEMENT_NEW_2_COMPULSORY_H
#define STUDENTMANAGEMENT_NEW_2_COMPULSORY_H

#include <Subject.h>

/*
 * 类名：Compulsory
 * 作者：heldon
 * 编写日期：18-10-22
 * 功能描述：
 * 版本：
 */
class Compulsory : public Subject{
public:
    Compulsory(const string &m_subject_name, float m_points, short m_times,const Option<string> &m_description,
               const vector<shared_ptr<Teacher> > &mp_teachers);

    Compulsory(const string &m_subject_name, float m_points, short m_times, const Option<string> &m_description,
               const vector<shared_ptr<Teacher>> &mp_teachers);
};


#endif //STUDENTMANAGEMENT_NEW_2_COMPULSORY_H
