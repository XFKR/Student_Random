#include<iostream>
#include<vector>
#include"./DataStruct/students.hpp"

FILE* fpcsv;

int main(int argc, char* argv[])
{
    std::cout << "Student_Random Repo" << std::endl;
    Students s(fopen("1.csv","r"));

    for (int i = 0 ; i <= s.getlen(); i++)
    {
        printf("%s %d\n", s.getname(i).c_str(), s.getid(i));
    }
    
    return 0;
}