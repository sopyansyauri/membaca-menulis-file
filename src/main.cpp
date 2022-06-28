#include <iostream>
#include <fstream>

using namespace std;



int main(int argc, char const *argv[])
{
    // UNTUK CREATE FILE DAN MEMASUKAN ISI KEDALAM FILE
    // ofstream Myfile("filename2.txt");
    // ofstream Myfile2("filename.txt");

    // MEMASUKAN ISI KEDALAM FILE
    // Myfile << "harus di isi";
    // Myfile2 << "KAMU KENA HACK ";

    // Myfile.close();


    string text;

    // HANYA MEMBACA SEBUAH FILE
    ifstream readfile("file1.txt");

    // UNTUK LOOPING SETIAP BARIS DI DALAM FILE
    while(getline(readfile,text)) {
        cout << text;
    }

    readfile.close();

    return 0;
}
