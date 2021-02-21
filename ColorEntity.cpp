#include "ColorEntity.hpp"

ColorEntity::ColorEntity() {
	this->color = -1;
}

ColorEntity::ColorEntity(int R, int G, int B) {
	this->color = R+G+B;
}

int ColorEntity::setValue(int R, int G, int B) {
	color = R+G+B;
	return color;
}

int ColorEntity::getValue() {
	return color;
}