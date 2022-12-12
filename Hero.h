#pragma once
#include "dot.h"

class Hero{
private:
    dot pos;
public:
    Hero();

    dot get_position();
    void move_to(dot pos);
};
