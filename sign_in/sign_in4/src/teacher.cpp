#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>
#include<stdlib.h>
#include <fstream>


#include "teacher.h"

teacher::teacher( int a)
    : people(a)
{
    teacher::print();
    conn = people::get_connection();
    teacher::set_username_password();

    teacher::print();
    while (std::cin>>user_choose)
    {
        if(user_choose == 1)
        {
            teacher::read();
        }

        else if(user_choose == 2)
        {
            teacher::write();
        }

        else if(user_choose == 3)
        {
            teacher::download_file();
        }

        else if(user_choose == 4)
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

        teacher::print();
    }
}

void teacher::set_username_password() //Char to String
{

    teacher::username.assign(people::get_username());
    teacher::password.assign( people::get_password());
}

void teacher::print()
{
    std::cout<<"\n\n-----------------------------------------\n\n"
            <<"(1)read student's score\n"
            <<"(2)say something to us\n"
            <<"(3)download file\n"
            <<"(4)exit\n"
            <<"your choose:";
}

void teacher::read()
{

        int qstate = mysql_query(conn, "SELECT * FROM student"); // 0 equal true  ,  1 equal fail

       int r = mysql_query(conn, "SET NAMES GB2312");
/*
        if(r)
            std::cout<<"success"<<std::endl;
        else
          std::cout<<"fail"<<std::endl;
*/
        std::cout<<std::endl<<"--------------------------------------------------"
                    <<std::endl;
        if(!qstate)// 0 equal true  ,  1 equal fail
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
        else{
            std::cout<<"fail"<<std::endl;
        }

}

void teacher::write()
{
    std::string str;

    std::cout<<"\n\n-----------------------------------------\n\n"
            <<"you what to say:";

    std::cin>>str;


    std::cout<<"Thanks your advices\n\n";
}



void teacher::download_file()
{
    int qstate = mysql_query(conn, "SELECT * FROM student");


    FILE* f;
    std::fstream file;

    f = fopen("demo.csv" , "wt");
    file.open("demo.csv" , std::ios::out);



    if(!qstate)
    {
        res=mysql_store_result(conn);


        file << "sno" << ","
            <<"name"<<","
            <<"username"<<","
            <<"password"<<","
            <<"chinese"<<","
            <<"english"<<","
            <<"math"<<","
            <<"science"<<"\n";

        while (row = mysql_fetch_row(res))
        {
            file<<row[0]<<","
                <<row[1]<<","
                <<row[2]<<","
                <<row[3]<<","
                <<row[4]<<","
                <<row[5]<<","
                <<row[6]<<","
                <<row[7]<<"\n";


        }

        std::cout<<"\ndownload success\n";
    }

    else
        std::cout<<"\ndownload fail\n";


    file.close();

}
/*
teacher::~teacher()
{
    //dtor
}
*/
