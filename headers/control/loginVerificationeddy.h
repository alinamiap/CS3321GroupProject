#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "control/dataManipulation.h"

class loginVerification
{
    private:
    int incorrectLogins = 0;
    
    public:
    const int maxIncorrectLogins = 3;
    const int lockTime = 5;
    bool verifyUser(std::string, std::string);
};