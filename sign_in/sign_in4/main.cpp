#include <iostream>
#include <windows.h>
#include <mysql.h>

#include "student.h"
#include "teacher.h"

int main()
{

    //student s1(2);

    std::cout<<"who are you\n\n"
            <<"(1)visiter\n"
            <<"(2)student\n"
            <<"(3)teacher\n"
            <<"your choose:";
    int user;

    std::cin>>user;

    if(user == 1)
   {

   }

    else if( user == 2)
    {
        student s1(user);
    }

    else if(user == 3)
    {
        teacher t1(user);
    }
    else
      std::cout<<"fail\n";


    return 0;
}
