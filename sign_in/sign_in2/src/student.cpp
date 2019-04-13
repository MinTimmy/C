#include <iostream>
#include<windows.h>
#include<mysql.h>
#include <sstream>
#include<string.h>
#include <vector>



#include "student.h"

student::student()
{
    std::cout<<"welcome to enter my home\n";

    sign_in();

    print();

    std::cin>>user_choose;

    if(user_choose == 1)
    {
        read();
    }

    else if(user_choose == 2)
    {
        write();
    }

    else if(user_choose == 3)
    {
        std::cout<<"\n----------------------------------------------\n"
                <<"have a nice day/n";

        //exit();
    }

    else
    {
        std::cout<<"\n----------------------------------------------\n"
                <<"error";
    }
}

void student::sign_in()
{
    std::cout<<"enter your username:";
    std::cin>>username;

    std::cout<<"\n\n";

    std::cout<<"enter you password:";
    std::cin>>password;
    std::stringstream ss;
    ss << "SELECT * FROM student WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

    std::string q = ss.str();
    query = q.c_str();

    int qstate = mysql_query(conn , query);
    if(!qstate) // 0 equal true  ,  1 equal fail
    {

        int temp = 1; // §PÂ_±b¸¹±K¬O§_¥¿½T
     while(row = mysql_fetch_row(res))
        {
            if(row[0] != NULL)
            temp = 0;
        }

        if(temp == 0)
        {
            std::cout<<"you sign in success\n";
        }

        else
        {
            std::cout<<"you sign in fail\n";
        }

    }
}
void student::read()
{


    int qstate = mysql_query(conn , query);
    if(!qstate) // 0 equal true  ,  1 equal fail
    {
        res = mysql_store_result(conn);



        while(row = mysql_fetch_row(res)){
                std::cout << "sn:"<<row[0] <<std::endl
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
    std::cout<<"(1)read your score\n"
            <<"(2)write something to us\n"
            <<"(3)exit my home\n"
            <<"your choose";
}

void student::write()
{
    std::string str;

    std::cout<<"\n----------------------------------------------\n"
            <<"you want to say:";
    std::cin>>str;

    std::cout<<"\n----------------------------------------------\n"
            <<"you  say:"
            <<str;
}

void student::_conn()
{

    conn = mysql_init(0);

    conn = mysql_real_connect(conn , "localhost" , "root" , "timmy001" , "myschool",0,NULL,0);
}


/*
student::~student()
{
    //dtor
}
*/
