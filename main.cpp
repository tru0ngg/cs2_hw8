// main.cpp
#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;
#include "Blob.hpp"
#include "Rectangle.hpp"
#include "Outline.hpp"

Blob* fetch_blob() {
        std::string shape;
        cin >> shape;

        if (shape == "Blob"){
                int r, c; char m;
                cin >> r >> c >> m;
                return new Blob(r, c, m);
        }
        if (shape == "Rectangle"){
                int r, c, h, w; char m;
                cin >> r >> c >> h >> w >> m;
                return new Rectangle(r, c, h, w, m);
        }
        if (shape == "Outline"){
                int r, c, h, w; char m;
                cin >> r >> c >> h >> w >> m;
                return new Outline(r, c, h, w, m);
        }
        return nullptr;
}

int main() {
    char canvas[20][40];
    for (int row=0; row < 20; row++) {
        for (int col=0; col < 40; col++) {
            canvas[row][col] = '-';
        }
    }

    int N;
    cin >> N;

    for (int i=0; i < N; i++) {
        Blob* example = fetch_blob();
        if (example == nullptr) {
            continue;
        }
        example->blit(canvas);
        delete example;
    }

    for (int row=0; row < 20; row++) {
        for (int col=0; col < 40; col++) {
            cout << canvas[row][col];
        }
        cout << endl;
    }

    return 0;
}
