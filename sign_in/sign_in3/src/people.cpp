#include <iostream>
#include <windows.h>
#include <mysql.h>



#include "people.h"

people::people()
{
    _conn();
}


void people::_conn()
{
    conn = mysql_init(0);

    conn = mysql_real_connect(conn , "localhost" , "root" , "timmy001" , "myschool",0,NULL,0);


}


MYSQL * people::get_connection()
{
    return conn;
}
/*
people::~people()
{
    //dtor
}
*/
