#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>



#include "people.h"

people::people(int user)
{
    _conn();

    if(user == 1)
    {

    }

    else if(user == 2)
    {
        sign_in("student");
    }

    else if(user == 3)
    {
        sign_in("teacher");
    }

}


const char* people::get_username() //String to Char
{
   const char *a;

    a = username.c_str();

    return a;
}

const char* people::get_password() //String to Char
{
   const char *a;

    a = password.c_str();

    return a;
}

void people::_conn()
{
    conn = mysql_init(0);

    conn = mysql_real_connect(conn , "localhost" , "root" , "timmy001" , "myschool",0,NULL,0);


}


void people::sign_in(std::string user)
{
    std::cout<<"\n\n-----------------------------------------\n\n"
            <<"hello "<<user
            <<"\n\nenter your username:";
    std::cin>>username;

    std::cout<<"\n\n";

    std::cout<<"enter you password:";
    std::cin>>password;

    std::stringstream ss;
    ss << "SELECT * FROM "<<user<<" WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

    std::string q = ss.str();
    const char*  query = q.c_str();

    int temp = 1; // check the username and password true or not
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
