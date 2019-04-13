#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
#include <windows.h>
#include <mysql.h>



#include "people.h"
class student : public people
{
    public:
        student(int );
       // virtual ~student();

        void read();
        void print();
        void write();
        void set_username_password();

    protected:

    private:

        int user_choose;
        MYSQL *conn;
        MYSQL_ROW row;
        MYSQL_RES * res;
        std::string username;
        std::string password;
};

#endif // STUDENT_H
