#pragma once
#include "Cow.h"

class Calf :
    public Cow
{
    int age;

public:
    Calf(int age_);  
};

