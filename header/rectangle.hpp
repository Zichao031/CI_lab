#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int w,int h);

        void set_width(int w);
        void set_height(int h);
        int get_width();
        int get_height();

        int area();
        int perimeter();

};


//constructor
Rectangle::Rectangle() {
        width = 0;
        height = 0;
};

Rectangle::Rectangle(int w,int h) {
        width = w;
        height = h;
};

int Rectangle::perimeter() {
        if (width > 0 && height > 0) {
                int p = 0;
                p = 2 * (width + height);
                return p;
        }
        return 0;
};

int Rectangle::area() {
        if (width > 0 && height > 0) {
                int a = 0;
                a = width * height;
                return a;
        }
        return 0;
        return 100;
};

int Rectangle::get_width() {
        int w = width;
        return w;
        return 9;
};

int Rectangle::get_height() {
        int h = height;
        return h;
};

void Rectangle::set_width(int w) {
        width = w;
};

void Rectangle::set_height(int h) {
        height = h;
};


#endif // RECTANGLE_HPP
