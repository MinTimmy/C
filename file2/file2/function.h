#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <iostream>
#include<windows.h>
#include<mysql.h>
#include <sstream>
#include<string.h>

void read(MYSQL*);
void write(MYSQL*);
void download_file(MYSQL *);
void sign_in(MYSQL *);

void read(MYSQL* conn)
{
    MYSQL_ROW row;
    MYSQL_RES* res;


        int qstate = mysql_query(conn, "SELECT * FROM students"); // 0 equal true  ,  1 equal fail

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
                        <<"phone:"<<row[2]<<std::endl
                        <<"username:"<<row[3]<<std::endl
                        <<"password:"<<row[4]<<std::endl;

            std::cout<<"\n--------------------------------------------------\n";

             }

        }
        else{
            std::cout<<"fail"<<std::endl;
        }

}


void write(MYSQL* conn)
{
    std::string name,phone,password,username;
    int qstate;

    std::cout<<"enter name:";
    std::cin>>name;

    std::cout<<std::endl<<std::endl<<"enter phone:";
    std::cin>>phone;

    std::cout<<std::endl<<std::endl<<"enter username:";
    std::cin>>username;

    std::cout<<std::endl<<std::endl<<"enter password:";
    std::cin>>password;


    std::stringstream ss;
    ss << "INSERT INTO `students`( `name`, `phone`, `username`, `password`) VALUES ('" << name << "','" << phone<<"','"<<username<<"','"<<password<<"')";

    //ss << "INSERT INTO `students`( `name`) VALUES ('" << name <<"')";

    std::string query = ss.str(); // change stream to string
    const char* q = query.c_str(); // change string to char

    qstate = mysql_query(conn , q);
   // std::cout<<qstate;
    if(qstate == 0)
    {
        std::cout << "Record Updated..." << std::endl;
        std::cout<<" update success" <<std::endl;

    }

    else {
        std::cout<<"update fail"<<std::endl;
    }
}

void download_file(MYSQL * conn)
{
    int qstate = mysql_query(conn, "SELECT * FROM students");

    MYSQL_ROW row;
    MYSQL_RES* res;
    FILE* f;
    std::fstream file;

    f = fopen("C:\\Users\\timmy\\Desktop\\file\\file2\\demo\\demo.csv" , "wt");
    file.open("C:\\Users\\timmy\\Desktop\\file\\file2\\demo\\demo.csv" , std::ios::out);



    if(!qstate)
    {
        res=mysql_store_result(conn);


        file << "sno" << ","<<"name"<<","<<"phone"<<","<<"username"<<","<<"password"<<"\n";
        while (row = mysql_fetch_row(res))
        {
            file<<row[0]<<","<<row[1]<<","<<row[2]<<","<<row[3]<<","<<row[4]<<"\n";


        }
    }

    std::cout<<std::endl<<"download success"<<std::endl;
    file.close();

}

void sign_in(MYSQL *conn) //登入
{
    MYSQL_ROW row;
    MYSQL_RES * res;

    std::string username;
    std::string password;

    std::cout<<"enter your username:";
    std::cin>>username;

    std::cout<<"\n\n";

    std::cout<<"enter you password:";
    std::cin>>password;
    std::stringstream ss;
    ss << "SELECT * FROM students WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

    std::string query = ss.str();
    const char* q = query.c_str();

    int qstate = mysql_query(conn , q);
    if(!qstate) // 0 equal true  ,  1 equal fail
    {
        res = mysql_store_result(conn);
        int temp = 1; // 判斷帳號密是否正確


        while(row = mysql_fetch_row(res)){
                std::cout << "sn:"<<row[0] <<std::endl
                        <<"name:"<<row[1] <<std::endl
                        <<"phone:"<<row[2]<<std::endl
                        <<"username:"<<row[3]<<std::endl
                        <<"password:"<<row[4]<<std::endl;

                std::cout<<"\n--------------------------------------------------\n";

                if(row[0] != NULL)
                    temp = 0;
             }
    if(temp == 0)
        std::cout<<"you sign in success\n";
    else
        std::cout<<"you sign in fail\n";
    }

}

#endif // FUNCTION_H_INCLUDED
