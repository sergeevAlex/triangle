#include "triangle.h"
#include <iostream>
#include <vector>
#include <math.h>
#define PI 3.14159265

using namespace std;
void Triangle::change_size(double koef){
    a = a*koef;
    b = b*koef;
    c = c*koef;
}

double Triangle::middle_lines(int i, int j){
    if((i==0 & j == 1) || (i==1 & j == 0))
        return (c/2);
    if((i==1 & j ==2 )||(i==2 & j ==1 ))
        return (a/2);
    if((i == 0 & j==2)||(i == 2 & j==0))
        return (b/2);
    else {
        cout << "Wrong number of sides!";
        return 0;
    }
}
void Triangle::type_of_tr(){
    if(((b+c-a) > 0) && ((a+c-b) > 0) && ((a+b-c) > 0))
    {
    vector<double>v(3);
    v[0]=a;v[1]=b;v[2]=c;
    sort(v.begin(),v.end());
    double max = v[2];
    double ave = v[1];
    double min = v[0];
    if(max*max > min*min+ ave*ave)
        cout << "Треугольник тупоугольный" << endl;
    else if(max*max < min*min+ ave*ave)
        cout << "Треугольник остроугольный" << endl;
    else cout << "Треугольник прямоугольный" << endl;
        }
    else {cout << "Треугольник не существует! " << endl;}
}

void Triangle::value_of_angl(){

    if(((b+c-a) > 0) && ((a+c-b) > 0) && ((a+b-c) > 0))
    {
    double Alpha = acos((a*a + b*b - c*c)/(2*a*b))*180.0/PI;
    cout << "Угол между сторонами a&b равен: " << Alpha << endl;
    double Betta = acos((a*a + c*c - b*b)/(2*a*c))*180.0/PI;
    cout << "Угол между сторонами a&c равен: " << Betta << endl;
    double Gamma = 180-(Alpha+Betta);
    cout << "Угол между сторонами c&b равен: " << Gamma << endl;}

    else {cout << "Треугольник не существует! " << endl;}
}