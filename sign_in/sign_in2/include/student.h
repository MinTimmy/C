#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <string.h>

#include "people.h"


class student : public people
{
    public:
        student();

        void sign_in();

        void _conn();
        void read();
        void write();
        void print();
       // virtual ~student();

    protected:

    private:

        MYSQL * conn;
        int user_choose;
        std::string username;
        std::string password;

        const char* query;

        MYSQL_ROW row;
        MYSQL_RES * res;

};

#endif // STUDENT_H
