#include "students.hpp"

int Students::getlen() {return Students::length;}
int Students::getid(int id) {return Students::id[id];}
std::string Students::getname(int id) {return Students::name[id];}//获取名字

Students::Students(FILE* _fpcsv)
{
    char c; //读取的字符
    std::string str=""; //进行写入的字符串
    while (true) //在EOF之前持续读入
    {
        c=getc(_fpcsv); //获取字符
        if (c==-1){ //EOF
            Students::id.push_back(std::stoi(str)); //转换为数字写入ID
            str=""; //重置字符串
            break; //跳出
            }
        else if (c=='\r'|| c=='\n') { //CRLF换行
            Students::id.push_back(std::stoi(str)); //转换为数字写入ID
            str=""; //重置字符串
            continue;
            }
        else if (c==',') { //换列
            Students::name.push_back(str); //写入姓名
            str=""; //重置字符串
            continue;
            }
        else str+=c; //写入字符串
    }
    length = name.size()-1;
}