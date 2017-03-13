#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

const int PRYAM = 1;

struct Triangle {
    double a, b, c;
    void change_size(double koef);
    double middle_lines(int i, int j);
    double type_of_tr();
    vector<double> value_of_angl();
};

#endif // TRIANGLE_H