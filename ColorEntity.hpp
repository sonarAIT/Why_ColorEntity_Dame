#pragma once

class ColorEntity {
	int color;
public:
	ColorEntity();
	ColorEntity(int R, int G, int B);
	int setValue(int R, int G, int B);
	int getValue();
};