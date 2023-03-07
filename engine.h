
#pragma once 
#include <SFML/Graphics.hpp>
#include "player.h"
using namespace sf;
 
class Engine {
public:
    RenderWindow window;
    Engine();
    Player player;
    void draw();
    
    void init();
    void loop();
};