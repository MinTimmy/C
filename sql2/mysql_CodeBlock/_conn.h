#ifndef _CONN_H_INCLUDED
#define _CONN_H_INCLUDED

#include<windows.h>
#include<mysql.h>

MYSQL* _conn ()
{
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn,"localhost","root","timmy001","myschool",0,NULL,0);

    return conn;


}

#endif // _CONN_H_INCLUDED
