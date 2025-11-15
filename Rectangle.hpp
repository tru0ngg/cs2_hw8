// Rectangle.hpp
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Blob.hpp"

class Rectangle : public Blob {
        protected:
        int its_height;
        int its_width;

        public:
        Rectangle(int row, int column, int height, int width, char marker);
        virtual ~Rectangle() {}
        virtual void blit(char canvas[20][40]) override;
};

#endif
