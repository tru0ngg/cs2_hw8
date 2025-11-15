// Blob.hpp
#ifndef BLOB_HPP
#define BLOB_HPP
class Blob {
    protected:
    int its_row;
    int its_column;
    char its_marker;

    public:
    Blob(int row, int column, char marker);
    virtual void blit(char canvas[20][40]);
    virtual ~Blob() {}
};
#endif
