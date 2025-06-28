

#include <iostream>
#include <fstream>
using namespace std;


struct Product
{
    char name[20];
    double price;
    bool isInStock;
};


int main()
{
    //create file
    //open file
    //read file
    //write file
    //close file

    //cout << "Hello";
    //int a;
    //cin >> a;
    //cout << a;


    //write to file
    ofstream fileOut;
    fileOut.open("text.txt");
    fileOut << "Work with file in C++";
    fileOut.close();


    //read from file

    char buffer[100];
    ifstream fileIn;

    fileIn.open("textttttttt.txt");
    if (!fileIn.is_open())
        cout << "File not found " << endl;
    else
    {
        fileIn.open("text.txt");  // if exist
        fileIn >> buffer;
        cout << buffer << endl;

        fileIn.getline(buffer, 100);
        cout << buffer << endl;
        fileIn.close();
    }
    fileIn.close();



    ofstream fout("File.txt", ios_base::app);
    if (fout.is_open())
    {
        fout << "Hello world" << endl;
        fout << "Hello world" << endl;
        fout << "Hello world" << endl;
        fout << "Hello world" << endl;
        fout << "Hello world" << endl;
        fout << "Hello world" << endl;
        cout << "Text save to file" << endl;
    }
    else
    {
        cout << "File not found";
    }
    fout << "Hello world";
    fout.close();


    char buff2[255];
    ifstream fIn("File.txt", ios_base::in); // default - in
    if (fIn.is_open())
    {
        while (!fIn.eof()) 
        {
            fIn.getline(buff2, 255);
            cout << buff2 << endl;
        }
        
    }
    fIn.close();



    //Binary save to file

    Product pr{ "Notebook", 150.55, true };
    ofstream fileBinaryOut("Product.bin", ios_base::out | ios_base::binary);

    fileBinaryOut.write((char*)&pr, sizeof(pr));
    fileBinaryOut.close();

    ifstream readBinaryIn("Product.bin", ios_base::in | ios_base::binary);
    Product read;
    readBinaryIn.read((char*)&read, sizeof(read));
    readBinaryIn.close();

    cout << read.name << "    " << read.price << "   " << read.isInStock << endl;



















}


