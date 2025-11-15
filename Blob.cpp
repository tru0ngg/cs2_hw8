#include "Blob.hpp"
Blob::Blob(int row, int column, char marker) {
    its_row = row;
    its_column = column;
    its_marker = marker;
}

void Blob::blit(char canvas[20][40]) {
    for (int row=0; row < 20; row++) {
        for (int col=0; col < 40; col++) {
            if ((its_row-row)*(its_row-row) + (its_column-col)*(its_column-col)/4 <= 25) {
                canvas[row][col] = its_marker;
            }
        }
    }
}
