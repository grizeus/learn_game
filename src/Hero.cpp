#include "../Hero.h"


Hero::Hero(){
    pos.x = 0;
    pos.y = 0;
}

dot Hero::get_position(){
    return pos;
}

void Hero::move_to(dot pos){
    this->pos.x = pos.x;
    this->pos.y = pos.y;
}