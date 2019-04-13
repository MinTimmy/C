#ifndef _CONN_H_INCLUDED
#define _CONN_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <mysql.h>


MYSQL * _conn()
{
    MYSQL * conn;

    conn = mysql_init(0);

    conn = mysql_real_connect(conn , "localhost" , "root" , "timmy001" , "myschool",0,NULL,0);
/*
    if(!conn)
        std::cout<<"fail"<<std::endl;

    else
        std::cout<<"success"<<std::endl;
*/
    return conn;
}


#endif // _CONN_H_INCLUDED
