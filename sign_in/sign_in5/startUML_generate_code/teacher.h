/**
 * Project Untitled
 */


#ifndef _TEACHER_H
#define _TEACHER_H

#include "log in.h"


class teacher: public log in {
public: 
    
/**
 * @param int
 */
void teacher(void int);
    
void set_person_information();
private: 
    MYSQL * conn;
    MYSQL_RES * res;
    MYSQL_ROW row;
    int sno;
    string name;
    string username;
    string password;
};

#endif //_TEACHER_H