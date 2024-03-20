#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>
#include <sstream>


#include <lib/lr1.h>

using namespace std;



int main() {
    setlocale(LC_ALL, "ru-RU");
    string nameFile = "initial.txt";
    vector<float> arr = fun(nameFile);
    string errrosMessage[3] = { " оличество чисел в массиве > 1024", "„исло возведенное в куб на выходит за границы тип float" };

    cout << "»ндекс удовлетвор€ющий условию: " << indNumCond << endl;
    cout << "Ёлемент массива удовлетвор€ющий условию: " << numCond << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << (arr[i]) << "  ";
    }


    if (indexErrors.size())cout << "\nћассив ошибок:\n";
    for (int i : indexErrors) {
        cout << errrosMessage[i] << endl;
    }
    return 0;
}