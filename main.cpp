#include<iostream>
#include"./DataStruct/students.hpp"

int main(int argc, char* argv[])
{
    if (argc!=2) return -1;

    Students sds(fopen(argv[1], "r"));




    return 0;
}