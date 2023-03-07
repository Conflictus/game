#include "engine.h"
Engine::Engine() {
    init();

}
void Engine::init (){
    window.create(VideoMode(400, 720), "Game");
    
}
void Engine::draw() {
    window.clear(Color(0, 255, 0));
    window.draw(player.getSprite());
    window.display();
}
void Engine::loop() {
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if ((event.type == Event::Closed) || (event.key.code == Keyboard::Escape))           
            {
                window.close();
            }
            
        }
        draw();
    }
    
}