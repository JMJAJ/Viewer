#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    cout << "You have file in same folder with this application" << endl;
    cout << "Example - You have Hello.txt on Desktop, so you must have the application in the same folder - on Desktop" << endl;
    cout << "Example - Desktop is also a folder - C:/Users/<YourName>/Desktop/\n" << endl;

    system("pause");
    system("cls");

    cout << "You must write <FileName>.txt <- .txt for good working\n" << endl;
    cout << "Supported types of document\n\n - .txt\n - .dat\n - .c/cpp\n - .html/css/java\n - coming soon\n\n" << endl;
    cout << "Not supported types of document\n\n - .docx\n - coming soon\n\n" << endl;
    cout << "Example: try.txt\n" << endl;

    string fileName;
    string path; // example path - C:/Users/Brudy/Desktop/54511
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
