/**
 * Project Untitled
 */


#ifndef _STUDENT_H
#define _STUDENT_H

#include "log in.h"


class student: public log in {
public: 
    
/**
 * @param int
 */
void student(void int);
    
void set_person_information();
private: 
    MYSQL_ROW row;
    MYSQL_RES * res;
    MYSQL * conn;
    int sno;
    string name;
    string username;
    string password;
};

#endif //_STUDENT_H