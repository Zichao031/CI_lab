#include "../header/rectangle.hpp"
#include <gtest/gtest.h>

using namespace std;
Rectangle::Rectangle() {
        width = 0;
        height = 0;
}

Rectangle::Rectangle(int w, int h) {
        if ((w | h) <= 0) {
		cerr << "Error: Wrong Number!";
		exit(1);
	}
	else {
		width = w;
        	height = h;
	}
}

void Rectangle::set_width(int w) {
        if (w <= 0) {
                cerr << "Error: Wrong Number!";
                exit(1);
        }
        else {
                width = w;
        }
}

void Rectangle::set_height(int h) {
        if (h <= 0) {
                cerr << "Error: Wrong Number!";
                exit(1);
        }
        else {
                height = h;
        }
}

int Rectangle::area() {
        return width * height;
}

int Rectangle::perimeter() {
        return 2 * ( width + height);
}
