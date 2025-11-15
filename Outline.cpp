#include "Outline.hpp"

Outline::Outline(int row, int column, int width, int height, char marker) : Rectangle(row, column, width, height, marker){
}

void Outline::blit(char canvas[20][40]){
        for (int r = its_row; r < its_row + its_height; r++){
                for (int c = its_column; c < its_column + its_width; c++){
                        bool not_filled = ( r == its_row || r == its_row + its_height - 1 || c == its_column || c == its_column + its_width - 1);
                        if (not_filled){
                                if (r >= 0 && r < 20 && c >= 0 && c < 40){
                                        canvas[r][c] = its_marker;
                                }
                        }
                }
        }
}
