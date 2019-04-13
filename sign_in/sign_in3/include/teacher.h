#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <windows.h>
#include <mysql.h>

#include "people.h"


class teacher : public people
{
    public:
        teacher();

        void read();
        void print();
        void write();

        void sign_in();
        void download_file();

        //virtual ~teacher();

    protected:

    private:
        int user_choose;
        std::string username;
        std::string password;
        MYSQL_ROW row;
        MYSQL_RES * res;
        MYSQL *conn;
};

#endif // TEACHER_H
