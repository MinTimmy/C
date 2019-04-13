#ifndef PEOPLE_H
#define PEOPLE_H


#include <iostream>
#include <windows.h>
#include <mysql.h>


class people
{
    public:
        people(int );
        void _conn();
        MYSQL * get_connection();

        void sign_in(std::string);
        const char* get_username();
        const char* get_password();


        virtual void read() =0;
        virtual void write() =0;
        virtual void print()=0;
        //virtual ~people();

    protected:

    private:
        MYSQL *conn;
        MYSQL_ROW row;
        MYSQL_RES * res;
        std::string username;
        std::string password;
};

#endif // PEOPLE_H
