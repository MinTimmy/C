#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <iostream>
#include<windows.h>
#include<mysql.h>
#include <sstream>
#include<string.h>
#include <vector>


void read(MYSQL*);
void write(MYSQL*);
void download_file(MYSQL *);
bool student_sign_in(MYSQL *);
bool teacher_sign_in(MYSQL *);
void upload_file(MYSQL *);

void read(MYSQL* conn)
{
    MYSQL_ROW row;
    MYSQL_RES* res;


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
    int qstate = mysql_query(conn, "SELECT * FROM student");

    MYSQL_ROW row;
    MYSQL_RES* res;
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

bool student_sign_in(MYSQL *conn) //登入
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
    ss << "SELECT * FROM student WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

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
                        <<"username:"<<row[2]<<std::endl
                        <<"password:"<<row[3]<<std::endl
                        <<"chinese:"<<row[4]<<std::endl
                        <<"english:"<<row[5]<<std::endl
                        <<"math:"<<row[6]<<std::endl
                        <<"science:"<<row[7]<<std::endl;

                std::cout<<"\n--------------------------------------------------\n";




        while(row = mysql_fetch_row(res))
        {
            if(row[0] != NULL)
            temp = 0;
        }

        if(temp == 0)
        {
            std::cout<<"you sign in success\n";
            return true;
        }

        else
        {
            std::cout<<"you sign in fail\n";
            return false;

        }

    }

}


bool teacher_sign_in(MYSQL *conn) //登入
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
    ss << "SELECT * FROM teacher WHERE `username` = '"<<username<<"' AND `password` = '"<<password<<"'";

    std::string query = ss.str();
    const char* q = query.c_str();

    int qstate = mysql_query(conn , q);
    if(!qstate) // 0 equal true  ,  1 equal fail
    {
        res = mysql_store_result(conn);
        int temp = 1; // 判斷帳號密是否正確



        while(row = mysql_fetch_row(res))
        {
            if(row[0] != NULL)
            temp = 0;
        }

        if(temp == 0)
        {
            std::cout<<"you sign in success\n";
            return true;
        }

        else
        {
            std::cout<<"you sign in fail\n";
            return false;

        }

    }

}

void upload_file(MYSQL *conn)
{
    std::fstream file;
    char buffer[100];
    file.open("demo.csv" , std::ios::in);

    std::string line;
	while (getline(file, line))   //整行读取，换行符“\n”区分，遇到文件尾标志eof终止读取
	{
		std::cout <<"原始字符串："<< line << std::endl; //整行输出
		std::istringstream sin(line); //将整行字符串line读入到字符串流istringstream中
		//vector<string> fields; //声明一个字符串向量
		std::string field;

	}

/*
    if(!file)
        std::cout<<"fail"<<std::endl;
    else{
        do
        {
            file.getline(buffer,sizeof(buffer),',');
                std::cout<<buffer<<"\n";


        }while(!file.eof());

        file.close();
    }*/
}

#endif // FUNCTION_H_INCLUDED
