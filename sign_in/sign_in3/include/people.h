#ifndef PEOPLE_H
#define PEOPLE_H


#include <iostream>
#include <windows.h>
#include <mysql.h>


class people
{
    public:
        people();
        void _conn();
        MYSQL * get_connection();

        virtual void read() =0;
        virtual void write() =0;
        virtual void print()=0;
        //virtual ~people();

    protected:

    private:
        MYSQL *conn;
};

#endif // PEOPLE_H
