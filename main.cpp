#include <cstdlib>
#include <string>
#include <iostream>
#include "triangle.h"

using namespace std;
Triangle* create(int number){
    Triangle* tr = new Triangle[number];
    return tr;
}

void fill_up(Triangle* tr1, int number){
    for(int i=0;i<number;i++){
        cout << "Введите 3 стороны " << i << "-го треугольника: ";
        cin >> tr1[i].a >> tr1[i].b >> tr1[i].c;
    }
}

void print(Triangle* tr1, int number){
    for(int i=0;i<number;i++){
        cout << i << "-й треугольник со сторонами: " <<  tr1[i].a << " " << tr1[i].b << " " << tr1[i].c;
        cout << endl;
    }

}

int main() {
    int number;
    cout << "Введите кол-во треугольников: " << endl;
    cin >> number;
    Triangle* tr = create(number);
    fill_up(tr,number);
    print(tr,number);
//    tr[1].change_size(0.5);
//    cout << "NEW!" << endl;
//    print(tr,number);
//
//    double sr = tr[1].middle_lines(0,9);
//    cout << "\n MiddleLine: " << sr;
//
    tr[1].type_of_tr();


    return 0;
}