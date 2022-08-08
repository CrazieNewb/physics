#pragma once

#include "object_base.hpp"

class rectangle : public Object {
public:
    void init();
    void update() override;
    void draw() override;
    Vector2 size = {10.0f, 20.0f};

private:
    Vector2 origin; //init
    
};