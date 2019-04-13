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

    std::cout<<"who are you\n\n"
            <<"(1)student\n"
            <<"(2)teacher\n"
            <<"your choose:";

    int user;

    std::cin>>user;

download_file(conn);
//upload_file(conn);

   if(user == 1)
   {
        if(student_sign_in(conn))
        {
            std::cout<<"welcome\n\n";
        }
        else
          std::cout<<"fuck\n";
   }

    else if( user == 2)
    {
        if(teacher_sign_in(conn))
        {
            std::cout<<"hello teacher\n\n"
                    <<"---------------------------------------------\n\n"
                    <<"(1)read students' score\n"
                    <<"(2)download students' score\n"
                    <<"your choose:";

            int choose;
            std::cin>>choose;

            switch (choose)
            {
                case 1:
                    read(conn);
                    break;

                case 2:
                    download_file(conn);
                    break;
            }
        }

        else
          std::cout<<"fuck\n";

    }

    else
      std::cout<<"fail\n";






    return 0;
}

