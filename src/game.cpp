#include <iostream>

#include "../game.h"

dot input_position(void){
    dot pos;
    std::cout << "x position:" << std::endl;
    std::cin >> pos.x;
    std::cout << "y position:" << std::endl;
    std::cin >> pos.y;

    return pos;
}

void print_input_opts(){
    std::cout << "Your action:\n" <<
    "1 - skip\n" <<
    "2 - move\n" <<
    "3 -exit game" << std::endl;
}

int main (void){
    bool running = true;
    Hero hero;

    while (running){
        std::cout << hero.get_position().x << " " << hero.get_position().y << std::endl;
        int cmd;
        print_input_opts();
        std::cin >> cmd;

        switch (cmd){
        case command::end:
            break;
        
        case command::move:{
            dot new_pos = input_position();
            hero.move_to(new_pos);
        }
            break;
        default:
            break;
        }
    }   
}