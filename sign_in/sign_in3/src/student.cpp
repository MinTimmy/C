#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>
#include<stdlib.h>

#include "student.h"

student::student()
{
    conn = people::get_connection();
    /*
    if(!conn)
        std::cout<<"fail\n";
    else
        std::cout<<"success\n";
    */

    sign_in();
    student::print();
    while (std::cin>>user_choose)
    {
        if(user_choose == 1)
        {
            student::read();
        }

        else if(user_choose == 2)
        {
            student::write();
        }

        else if(user_choose == 3)
        {
            std::cout<<"\n\n---------------------------\n\n"
                    <<"goodbye\n\n";

            exit(0);
        }

        else
        {
            std::cout<<"\n\n---------------------------\n\n"
                    <<"error\n"
                    <<"please enter again\n\n";
        }

        student::print();
    }
}

void student::sign_in()
{

    std::cout<<"\n\n-----------------------------------------\n\n"
            <<"enter your username:";
    std::cin>>username;

    std::cout<<"\n\n";

    std::cout<<"enter you password:";
    std::cin>>password;

    std::stringstream ss;
    ss << "SELECT * FROM student WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

    std::string q = ss.str();
    const char*  query = q.c_str();

    int temp = 1; // §PÂ_±b¸¹±K¬O§_¥¿½T
    int qstate = mysql_query(conn , query);


    if(!qstate) // 0 equal true  ,  1 equal fail
    {
        res = mysql_store_result(conn);

        while(row = mysql_fetch_row(res)){
  // std::cout<<row[0]<<'\n';

                if(row[0] != NULL)
                    temp = 0;
        }
    }

    if(temp == 0)
        std::cout<<"you sign in success\n";
    else
    {
        std::cout<<"you sign in fail\n"
                <<"please open it again.\n\n"
                <<"-----------------------------------------\n\n";

        exit(0);

    }

}

void student::read()
{
   // res = mysql_store_result(conn);

    std::stringstream ss;
    ss << "SELECT * FROM student WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

    std::string q = ss.str();
    const char*  query = q.c_str();

    int qstate = mysql_query(conn , query);

    if(!qstate) // 0 equal true  ,  1 equal fail
    {
        res = mysql_store_result(conn);

        while(row = mysql_fetch_row(res)){
            std::cout<<"\n\n-----------------------------------------\n\n"
                        <<"your data:\n\n"
                        << "sn:"<<row[0] <<std::endl
                        <<"name:"<<row[1] <<std::endl
                        <<"username:"<<row[2]<<std::endl
                        <<"password:"<<row[3]<<std::endl
                        <<"chinese:"<<row[4]<<std::endl
                        <<"english:"<<row[5]<<std::endl
                        <<"math:"<<row[6]<<std::endl
                        <<"science:"<<row[7]<<std::endl;

                std::cout<<"\n--------------------------------------------------\n";

        }
    }




}


void student::print()
{
    std::cout<<"\n\n-----------------------------------------\n\n"
            <<"(1)read your score\n"
            <<"(2)say something to us\n"
            <<"(3)exit\n"
            <<"your choose:";
}

void student::write()
{
    std::string str;

    std::cout<<"\n\n-----------------------------------------\n\n"
            <<"you what to say:";

    std::cin>>str;


    std::cout<<"Thanks your advices\n\n";
}
/*
student::~student()
{
    //dtor
}
*/
