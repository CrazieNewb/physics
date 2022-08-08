#pragma once

#include "raylib.h"
#include "raymath.h"
#include "rlgl.h"
#include <cmath>
#include <string>
#include <vector>

class rectangle;

class Object {
public:
    virtual void update();
    virtual void draw();

    virtual ~Object() = default;
    
protected:
    Vector2 position = {0, 0};
    Vector2 motion = {0, 0};
    float rotation = 0.0f;
    float density = 10.0f;
    Color color = {255, 50, 50, 255};

private:

};