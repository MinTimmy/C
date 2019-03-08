#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
//#include <stdio.h>;
//using namespace std;

int main()
{
    std::fstream file;
    char buffer[100];
    file.open("demo.csv" , std::ios::in);

    if(!file)
        std::cout<<"fail"<<std::endl;
    else{
        do
        {
            file.getline(buffer,sizeof(buffer));
                std::cout<<buffer<<"\n";
        }while(!file.eof());

        file.close();
    }
    file.close();
    return 0;
}

/*
std::fstream file;
    char buffer[100];
    file.open("demo1.txt" , std::ios::in);

    if(!file)
        std::cout<<"fail"<<std::endl;
    else{
        file.read(buffer,sizeof(buffer));
        std::cout<<buffer<<std::endl;
        file.close();
    }
*/


/*

std::fstream file;
    char buffer;
    file.open("demo1.txt" , std::ios::in);

    if(!file)
        std::cout<<"fail"<<std::endl;
    else{
        while(file.get(buffer))
            std::cout<<buffer;
        file.close();
    }
*/


/*

std::fstream file;
    char buffer[100];
    file.open("demo1.txt" , std::ios::in);

    if(!file)
        std::cout<<"fail"<<std::endl;
    else{
        do
        {
            file.getline(buffer,sizeof(buffer));
                std::cout<<buffer;
        }while(!file.eof());

        file.close();
    }

*/

/*

std::fstream file;
    char buffer[100];
    //file.open("demo1.txt" , std::ios::in);
    file.open("demo1.txt" , std::ios::out | std::ios::app);
    if(!file)
        std::cout<<"fail"<<std::endl;
    else{
        //file << "hello world";

        std::cin.getline(buffer , 100,'\n');
       // std::cout<<strlen(buffer);
        std::cout<<buffer<<std::endl;
        //file.write(buffer , strlen(buffer));
        file.close();
    }

*/

/*

 std::string line;
    while (getline(file , line ))
    {
        std::istringstream templine(line);

        std::string data;

        while (getline(templine , data , ','))
        {
            std::cout<<data<<" , ";
        }
        std::cout<<'\n';
    }

*/

/*


    FILE *file1;
    FILE *file2;
    file1 = fopen("demo1.csv" , "wb");
    //file2 = fopen("demo2.csv","wt");


    if(!file1)
        std::cout<<"fail"<<std::endl;
    else
        std::cout<<"success"<<std::endl;


    int A = fputs("timmy" , file1);
*/

/*
std::fstream file;

    file.open("demo1.csv" ,std::ios::in);

    char str[10];
    //file.read(str , 10);

    do{
        file.getline(str , 10);

        std::cout<<str<<std::endl;
    }while(!file.eof());

*/
