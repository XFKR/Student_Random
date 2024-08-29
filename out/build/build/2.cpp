#include<cstdio>
#include<iostream>

int main()
{
    FILE* A=fopen("1.csv", "r");
    while (!feof(A))
    {
        printf("%d.", fgetc(A));
    }
    return 0;
}