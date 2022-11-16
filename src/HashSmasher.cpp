#include<iostream>
#include<cstring>
#include<vector>
#include<string>
#include "../include/HashSmasher.h"
#include "sodium.h"



std::string smashTheHash(const unsigned char* message, unsigned long long messageLength)
{
    unsigned char hash[8];
    std::string processedHash = "";
    int retCode = crypto_generichash(hash, sizeof(hash), message, messageLength, NULL, 0);
    if(retCode == 0)
    {
        for(int i=0;i<sizeof(hash);i++)
        {
            int hashCharValue = (int)hash[i];
            if(hashCharValue < 10)
            {
                hashCharValue += 110;
            }
            else if(hashCharValue < 100)
            {
                hashCharValue += 100;
            }
            processedHash += std::to_string(hashCharValue);
        }
    }
    return processedHash;
}