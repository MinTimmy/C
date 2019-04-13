#include <iostream>
#include<windows.h>
#include<mysql.h>

#include "function.h"
#include "_conn.h"


int main()
{

    int user;

    MYSQL * conn = _conn();

    std::cout<<"(1)read data"<<std::endl
            <<"(2)write new data"<<std::endl
            <<"your choose:";

    std::cin>>user;

    switch( user)
    {
        case 1:
            read(conn);
            break;

        case 2:
            write(conn);
            break;
    }




    return 0;

}
