#include "triangle.h"
#include <iostream>
#include <stdio.h>
#include <exception>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

void Triangle::change_size(double koef){
    a = a*koef;
    b = b*koef;
    c = c*koef;
}

double Triangle::middle_lines(int i, int j){

    if(i==0 & j == 1)
        return (c/2);

    if(i==1 & j ==2 )
        return (a/2);

    if(i == 0 & j==2)
        return (b/2);
    else {
        cout << "Wrong number of sides!";
        return 0;
    }
}

void Triangle::type_of_tr(){
    vector<double>v(3);
    v[0]=a;v[1]=b;v[2]=c;
    sort(v.begin(),v.end());
    double max = v[2];
    double ave = v[1];
    double min = v[0];
    // cout << "Min: " << min << "Max: " << max << endl;
    if(sqrt(max)>sqrt(min)+sqrt(ave))
        cout << "Треугольник тупоугольный"<< endl;
    else if(sqrt(max)< sqrt(min)+sqrt(ave))
        cout << "Треугольник остроугольный"<< endl;
    else cout << "Треугольник прямоугольный";


}

void Triangle::value_of_angl(){



}