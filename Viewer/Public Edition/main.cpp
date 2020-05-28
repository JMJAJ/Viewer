#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE buff = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD sizeOfBuff;
    sizeOfBuff.X=50;
    sizeOfBuff.Y=50;
    SetConsoleScreenBufferSize(buff,sizeOfBuff);

    system("cls");

    cout << "You must write <FileName>.txt <- .txt for good working\n" << endl;
    cout << "Support types of document\n\n - .txt\n - .dat\n - .c/cpp\n - .html/css/java\n - coming soon\n\n" << endl;
    cout << "Not support types of document\n\n - .docx\n - coming soon\n\n" << endl;
    cout << "Example: try.txt\n" << endl;

    string fileName;
    getline(cin, fileName);
    //cout << fileName << endl;

    system("cls");

    ifstream infile(fileName.c_str());
    if(infile)
        cout << infile.rdbuf();
    else
        cerr << "Error(1) - try again " << fileName << endl;
    cout << "\n\n" << endl;
    system("pause");

    return 0;
}
