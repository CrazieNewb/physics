#include "engine.hpp"

Engine::Engine(){
    rectangle obj;
    obj.update();
}

void Engine::update(){
    for (int s = 0; s < (int)scene.size(); s++)
        scene[s]->update();
}

void Engine::draw(){
    for (int s = 0; s < (int)scene.size(); s++)
        scene[s]->draw();
}