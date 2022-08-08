#pragma once

#include "raylib.h"
#include "raymath.h"
#include "rlgl.h"
#include <cmath>
#include <string>
#include <vector>

#include "object.hpp"

class Engine {
public:
    Engine();
    void update();
    void draw();

private:
    std::vector<Object*> scene;
    
};