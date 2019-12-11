//
// Created by giofn on 11/12/2019.
//

#ifndef MATRICITEMPLATE_MATRIXTEMPLATE_H
#define MATRICITEMPLATE_MATRIXTEMPLATE_H

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <cfloat>

template<typename T>
class MatrixTemplate {
public:
    MatrixTemplate(int r, int c) : rows(r), columns(c) {
        if (r < 1)
            rows = 1;
        if (c < 1)
            columns = 1;
        buffer = new T[rows * columns];
        for (int i = 0; i < rows * columns; i++)
            buffer[i] = 0;
    }

    ~MatrixTemplate() {
        delete[] buffer;
    }

    MatrixTemplate(const MatrixTemplate &rh) {
        rows = rh.rows;
        columns = rh.columns;
        buffer = new T[rows * columns];
        for (int i = 0; i < rows * columns; i++)
            buffer[i] = rh.buffer[i];
    }
    private:
        int rows, columns;
        T *buffer;
};

#endif //MATRICITEMPLATE_MATRIXTEMPLATE_H
