#include <conio.h>

#include <fstream>
#include <iostream>
using namespace std;
string PATH = "C:/Users/sarvesh.b.kumar/Desktop/C++ Program/";
string TEMPLATE = "C:/Users/sarvesh.b.kumar/Desktop/C++ Program/template.cpp";

string readFile() {
    string line;
    string content;
    ifstream myfile(TEMPLATE);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            content += line + '\n';
        }
        myfile.close();
    } else {
        cout << "Unable to open file";
    }
    return content;
}

void createFile() {
    string directory;
    string fileName;
    cout << "Enter the directory i.e : cp\n";
    getline(cin.ignore(), directory);
    cout << "Please enter file name with extension i.e : test.cpp\n";
    getline(cin, fileName);
    ofstream file;
    file.open(PATH + directory + "/" + fileName);
    file << readFile();
    file.close();
    cout << "DONE\n";
}

int main() {
    int choice;
    do {
        cout << "Press 1 for new file\n";
        cout << "Press 0 for exit\n";
        cin >> choice;
        switch (choice) {
        case 1:
            createFile();
            break;
        case 0:
            goto end;
        default:
            break;
        }
    } while (1);
end:
    cout << "exit";
}