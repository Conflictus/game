#pragma once 
#include <SFML/Graphics.hpp>
using namespace sf;
 
class Engine {
public:
    RenderWindow window;
    Engine();
    void init();
    void loop();
};