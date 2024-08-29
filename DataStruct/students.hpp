#ifndef _STUDENT_H
#define _STUDENT_H

#include<string>
#include<cstdio>
#include<vector>
class Students
{
private:
    std::vector<int> id = std::vector<int>(1, -1); //学号
    std::vector<std::string> name = std::vector<std::string>(1, "none"); //姓名
    int length;
public:
    Students(FILE* _fpcsv); //构造函数 传入要读取的.csv文件
    ~Students(){};

    int getlen();
    int getid(int id);//获取ID
    std::string getname(int id); //获取姓名
};

#endif
