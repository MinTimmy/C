#include <iostream>
#include <fstream>

int main()
{
    //cout << "Hello world!" << endl;

    FILE *file1;
    std::ofstream file2;
    file1 = fopen("C:\\Users\\timmy\\Desktop\\file\\test1\\demo\\demo.txt" , "wt");
    file2.open("demo.txt" , std::ios::out);

    file2 << "12345";
    if(!file2)
        std::cout<<"fail\n";

    return 0;
}
