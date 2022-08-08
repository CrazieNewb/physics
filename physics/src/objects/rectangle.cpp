#include "objects/rectangle.hpp"

void rectangle::init(){
    origin = {position.x + size.x/2, position.y + size.y/2};
}

void rectangle::update(){
    
}

void rectangle::draw(){
    DrawRectanglePro({position.x, position.y, size.x, size.y}, origin, rotation, color);
}