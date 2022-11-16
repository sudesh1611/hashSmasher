#include<iostream>
#include<cstring>
#include<vector>
#include<string>
#include "../include/HashSmasher.h"
#include "sodium.h"

int main(int argc, char** argv)
{

    if (sodium_init() < 0) {
        std::cout<<"Error: Library could not be initialized. Try again!!!"<<std::endl;
        return 1;
    }
    if(argc == 2)
    {
        std::string hashValue = smashTheHash(reinterpret_cast<unsigned char*> (argv[1]), std::strlen(argv[1]));
        if(hashValue == "")
        {
            std::cout<<"Error: Unable to compute hash..."<<std::endl;
            return 2;
        }
        else
        {
            std::cout<<hashValue<<std::endl;
            return 0;
        }
    }
    else
    {
        std::cout<<"Error: This program expects one argument. Try again!!!"<<std::endl;
        return 1;
    }
}