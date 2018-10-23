/*
 * 作者:heldon
 * 编写日期：18-10-22
 * 功能描述：
 */
#ifndef STUDENTMANAGEMENT_NEW_2_SUBJECT_H
#define STUDENTMANAGEMENT_NEW_2_SUBJECT_H

#include <vector>
#include <string>
#include <memory>
#include <stout/option.hpp>
#include <Teacher.h>

/*
 * 类名：Subject
 * 作者：heldon
 * 编写日期：18-10-22
 * 功能描述：
 * 版本：
 */
 class Teacher;

 class Subject {

 private:

     /*课程名*/
     string m_subject_name;
     /*学分*/
     float m_points;
     /*学时*/
     short m_times;
     /*课程描述*/
     Option<string> m_description;
     /*老师集合*/
     vector<shared_ptr<Teacher> > mp_teachers;

 protected:

     Subject(const string &m_subject_name, float m_points, short m_times,const Option<string> &m_description,
             const vector<shared_ptr<Teacher> > &mp_teachers);
 public:

     Subject() = delete;

     const string &getM_subject_name() const;

     void setM_subject_name(const string &m_subject_name);

     float getM_points() const;

     void setM_points(float m_points);

     short getM_times() const;

     void setM_times(short m_times);

     const Option<string> &getM_description() const;

     void setM_description(const Option<string> &m_description);

     const vector<shared_ptr<Teacher>> &getMp_teachers() const;

     void setMp_teachers(const vector<shared_ptr<Teacher>> &mp_teachers);

     virtual ~Subject();


 };



#endif //STUDENTMANAGEMENT_NEW_2_SUBJECT_H
