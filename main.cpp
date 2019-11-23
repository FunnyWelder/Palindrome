#include <iostream>
#include <fstream>
#include "lib.h"
using namespace std;

int main()
{
    char *str = new char[n];
    ifstream fin;
    fin.open("../quest.txt");
    int j = 0;
    if (fin.is_open()) {
        for (int i = 0; i < n; i++)
        {
            fin >> str[i];
        }
        if (palindrome(str))
        {
            cout << "Палиндром" << endl;
        } else {
            cout << "Непалиндром" << endl;
        }
        fin.close();
    } else {
        cout << "Файла quest.txt нет";
    }
}

//не работает с русскими буквами
//если не получается запушить, то использовать git ignore