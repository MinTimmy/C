#include <iostream>
#include<windows.h>
#include<mysql.h>


int main()
{
    //std::cout<<"hello11111"<<std::endl;

    MYSQL * conn;

    conn = mysql_init(0);

    if(conn)
    {
        std::cout<<"success"<<std::endl;
    }
    else
    {
        std::cout<<"fail"<<std::endl;
    }
    

}