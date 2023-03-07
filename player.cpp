#include "player.h"
Player::Player(){
    init();
}
void Player::init() {
    Image image;
    image.loadFromFile("images/player1.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);
    //setTextureRect(IntRect(0, 0, 80, 120)); 

	setTextureRect(IntRect(0, 0, 120, 80)); 

	setPosition(Vector2f(0, 0));

}

Vector2f Player::getPosition() {

	return sprite.getPosition();
}

void Player::setPosition(Vector2f pos) {

	position = pos; 
	sprite.setPosition(position.x, position.y);
}

Sprite Player::getSprite() {

	return sprite;
}

void Player::setTextureRect(IntRect rect) {

	sprite.setTextureRect(rect);
}