#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
#include <windows.h>
#include <mysql.h>



#include "people.h"
class student : public people
{
    public:
        student();
        void sign_in();
       // virtual ~student();

        void read();
        void print();
        void write();

    protected:

    private:

        int user_choose;
        std::string username;
        std::string password;
        MYSQL_ROW row;
        MYSQL_RES * res;
        MYSQL *conn;
};

#endif // STUDENT_H
