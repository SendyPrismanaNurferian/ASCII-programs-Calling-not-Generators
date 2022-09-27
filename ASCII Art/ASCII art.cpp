#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void printASCIIcar (string file)
{
    string line = "";
    ifstream inFile;
    inFile.open("MK.txt"); // program akan membuka file txt yang anda inginkan
    if(inFile.is_open())
    {
        while(getline(inFile,line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "File Gagal di buka" << endl;
        cout << "Tidak ada yang ditampilkan" << endl;
    }
    inFile.close();
}

int main() 
{
    string file = "MK.txt"; //filename bisa di ubah dengan txt yang anda inginkan
    printASCIIcar(file);
    return 0;
}