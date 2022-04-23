// Title : Create, Write, and Read file
// Purpose: create a file then write into the file and read the file
// Practice make improvement - Enjoy the process - Have fun!
// Author : Fransiskus Agapa

#include <iostream>
#include <fstream>                                      // c++ library deals with file

using std::cout;
using std::cerr;
using std::endl;
using std::getline;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    ofstream out;                                        // create file
    ifstream in;                                         // write file

    out.open("Random.txt");                           // check if file exist if not it's going to be created
    if(!out.is_open())                                   // if for some reasons the file couldn't be created or found
    {
        cerr << "File cannot be accessed " << endl;       // cerr is used to output error message
        return -1;
    } else                                                // if open/created then write into it
    {
        out << " Hey There," << endl;
        out << " I am in a file," << endl;
        out << " This is love," << endl;
        cout << " It's clear to sea," << endl;
    }
    out.close();                                         // close the file after done with it

    in.open("Random.txt");                            // try to open the file to read it
    if(!in.is_open())
    {
        cerr << " File cannot be accessed " << endl;
    } else
    {
        string data;
        while(getline(in,data))
        {
            for(size_t i = 0; i < data.size();++i)
            {
                if(data.at(i) == ',')
                {
                    data.at(i) = '!';
                }
            }
            cout << data << endl;
        }
    }
    in.close();                                              // close file after done
    return 0;
}
