#include<iostream>
#include <fstream>
using namespace std;

void write(int data)
{

    ofstream outfile,outfile1;
    ifstream infile1;
    outfile.open("f.txt");


    cout << "Writing to the file = "<<data-1 << endl;
    outfile << data-1 << endl;

    outfile.close();

    if(!outfile.is_open())
    {
        outfile1.open("f.txt");
        cout << "File 1 is in write mode."<< endl;
        outfile1 << data << endl;
    }
    else{
        infile1.open("f.txt");
        cout <<"File 1 is in read mode.";
    }

    outfile1.close();
}
int main()
{
    char data[100];
    ifstream infile;
    infile.open("f.txt");


    cout << "Reading from the file" << endl;
    while( infile >> data)
    {
        cout << data << endl;
        write(1);
    }

}
