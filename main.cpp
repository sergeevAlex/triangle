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
int menu(){
    int choise;
    cout << "Выберите вариант\n" << endl;
    cout << "1. Увеличение/уменьшение размера сторон на заданное количество процентов\n"
    << "2. Вычисление средней линии для любой из сторон\n"
    << "3. Определение вида треугольника\n"
    << "4. Определение углов\n"
    << "5. Выбрать другой треугольник\n"
       << "6. Выход\n" << endl;
    cout << ">>> ";
    cin >> choise;
    return choise;
}

int main() {
    int number;
    int choise,newest;
    cout << "Введите кол-во треугольников: " << endl;
    cin >> number;
    int k ,j;
    double koef;
    Triangle* tr = create(number);
    int work;
    fill_up(tr,number);
    cout << "Выберите треугольник с которым начать работу: " << endl;
    cin >> work;
do {
    choise = menu();
    switch (choise) {
        case 1: {
            cout << "Коэффициент: " << endl;
            cin >> koef;
            tr[work].change_size(koef);
            cout << "Обновленные данные:  " << endl;
            print(tr,number);
            break;
        }
        case 2: {
            cout << "Введите номера(0,1,2) сторон между которыми вычислить среднюю линию: " << endl;
            cin >> k >> j;
           cout <<  tr[work].middle_lines(k, j) << endl;
            break;
        }
        case 3: {
            tr[work].type_of_tr();
            break;
        }
        case 4: {
            tr[work].value_of_angl();
            break;
        }
        case 6: {
            cout << "Завершение:" << endl;
            exit(EXIT_SUCCESS);
        }
        case 5:{
            cout << "Новый номер: "<< endl;
            cin >> newest;
            work = newest;
            break;
        }
        default: {
            cerr << "Неверный вариант! " << endl;

        }
    }
}
    while(choise !=6);

    return 0;
}