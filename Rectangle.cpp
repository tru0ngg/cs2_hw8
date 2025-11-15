#include "Rectangle.hpp"

Rectangle::Rectangle(int row, int column, int width, int height, char marker) : Blob(row, column, marker){
        its_height = height;
        its_width = width;
}
void Rectangle::blit(char canvas[20][40]){
        for (int r = its_row; r < its_row + its_height; ++r){
                for (int c = its_column; c < its_column + its_width; ++c){
                        if (r >= 0 && r < 20 && c >= 0 && c < 40){
                                canvas[r][c] = its_marker;
                        }
                }
        }
}
