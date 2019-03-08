#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include <iostream>
#include<windows.h>
#include<mysql.h>
#include <sstream>
#include<string.h>

void read(MYSQL*);
void write(MYSQL*);


void read(MYSQL* conn)
{
    MYSQL_ROW row;
    MYSQL_RES* res;


        int qstate = mysql_query(conn, "SELECT * FROM students");
        //MYSQL_SET_CHARSET_NAME(conn, "utf8");
       // int ret = mysql_options(conn, MYSQL_SET_CHARSET_NAME, "utf8");
       // mysql_set_character_set(conn, "gbk");
      // int r = mysql_real_query(conn, "SET NAMES UTF8;",(unsigned long) strlen ("SET NAMES UTF8;"));

     //int r = mysql_options(conn, MYSQL_SET_CHARSET_NAME, "GB2312");   //VS2005
        //mysql_set_character_set( conn, "big5");

       int r = mysql_query(conn, "SET NAMES GB2312"); //set ¤¤¤å
/*
        if(r)
            std::cout<<"success"<<std::endl;
        else
          std::cout<<"fail"<<std::endl;
*/
        std::cout<<std::endl<<"--------------------------------------------------"
                    <<std::endl;
        if(!qstate)
        {
            res = mysql_store_result(conn);

            while(row = mysql_fetch_row(res)){
                std::cout << "sn:"<<row[0] <<std::endl
                        <<"name:"<<row[1] <<std::endl
                        <<"phone:"<<row[2]<<std::endl
                        <<"username:"<<row[3]<<std::endl
                        <<"password:"<<row[4]<<std::endl;

                std::cout<<std::endl<<"--------------------------------------------------"
                    <<std::endl;
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
#endif // FUNCTION_H_INCLUDED
