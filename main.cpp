#include<iostream>
#include<algorithm>
#include<random>
#include<ctime>
#include"./DataStruct/students.hpp"

// argv[1]: .csv, argv[2]: 随机取数量
int main(int argc, char* argv[])
{
    system("chcp 936");
    if (argc!=3) return -1;//参数不足 不运行

    Students stdt(fopen(argv[1], "r"));

    if (atoi(argv[2])>=stdt.getlen()) return -1;//参数错误 直接退出

    std::vector<int> rd;
    for (int i=1; i<=stdt.getlen(); i++) rd.push_back(i); //顺序排序写入数组

    std::random_shuffle(rd.begin(), rd.end()); //打乱数组

    std::mt19937 rdg((int)time(NULL)); //创建伪随机数生成器 以时间戳为种子
    std::uniform_int_distribution distrib(1, 100); //限定打乱次数
    srand(time(nullptr)+rdg()); //初始化C库伪随机数生成器
    for (int i=1; i<=distrib(rdg); i++){
        std::random_shuffle(rd.begin(), rd.end()); //打乱数组
    }

    for (int i=0; i<=atoi(argv[2])-1; i++){
        printf("%s %d\n", stdt.getname(rd[i]).c_str(), stdt.getid(rd[i]));
    }

    return 0;
}