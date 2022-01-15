//Author: Justin Murray
//Email: jm104018@ohio.edu
//Date: January 14, 2022
//Description: Prints the number of lines in the given files

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    std::cout << "program: " << argv[0] << std::endl;

    std::ifstream ins;
    for(int i = 1; i < argc; i++)
    {
        int count = 0;

        std::cout << ' ' << argv[i] << ": ";

        ins.open(argv[i]);

        //If the file fails to open print -1    
        if(ins.fail())
            std::cout << -1 << std::endl;
        else
        {
            //Get lines until it fails and increment the counter each time.
            std::string trash;
            while(std::getline(ins, trash))
                count++;

            cout << count << std::endl;
        }

        ins.close();
    }

    exit(0); // this means that the program executed correctly!
}
