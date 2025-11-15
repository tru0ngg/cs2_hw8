// Outline.hpp
#ifndef OUTLINE_HPP
#define OUTLINE_HPP
#include "Rectangle.hpp"


class Outline : public Rectangle{
        public:
        Outline(int row, int column, int height, int width, char marker);
        virtual ~Outline(){}
        virtual void blit(char canvas[20][40]) override;
};

#endif
