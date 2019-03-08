#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <fstream>
#include <string.h>
#include <sstream>


#include "_conn.h"
#include "function.h"



int main()
{

    MYSQL * conn = _conn();
    int user;

   std::cout<<"(1)read data\n"
            <<"(2)write new data\n"
            <<"(3)download file\n"
            <<"(4)sign in\n"
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

        case 3:
            download_file(conn);
            break;

        case 4:
            sign_in(conn);
    }


    return 0;
}

