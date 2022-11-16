#include<iostream>
#include<cstring>
#include<vector>
#include<string>
#include "../include/HashSmasher.h"
#include "sodium.h"
#include <assert.h>



int main()
{
    if (sodium_init() < 0) {
        std::cout<<"Error: Library could not be initialized. Try again!!!"<<std::endl;
        return 1;
    }
    assert(smashTheHash((const unsigned char *)"Sudesh", 6) == "146184146137227162137194");
    assert(smashTheHash((const unsigned char *)"Adjust", 6) == "213129183119189170164114");
    assert(smashTheHash((const unsigned char *)"Adjusu", 6) == "153238158169196188211103");
    assert(smashTheHash((const unsigned char *)"Software Engineer", 17) == "116185117137134221194187");
    return 0;
}