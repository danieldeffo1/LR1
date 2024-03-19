#include "lr1.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>
#include <sstream>
using namespace std;


std::vector<int> indexErrors;
int indNumCond;
float numCond;

vector<float> fun(string nameFile) {

    ifstream input(nameFile);
    vector<float> arr;
    //float min = -0.00000000000000000000000000000000654321; // 6 значащих цифр
    //float max = -654321.346f; // 6 значащих цифр



    int countNums = 0;

    float ch;
    bool flagErr1 = 0;
    while (input >> ch) {
        ch = floor(ch * 10000000.0) / 10000000.0; //оставляем 7 цифр после запятой
        countNums++;
        if (countNums == 1024) indexErrors.push_back(0); //"Количество чисел в массиве > 1024"
        arr.push_back(ch);
    }

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < -1) {
            indNumCond = i;
            numCond = arr[i];
            bool flagErr = 0;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] < 0) {
                    arr[i] = pow(arr[i], 3);
                    if (!flagErr && (abs(arr[i]) > numeric_limits<float>::max() || //float max is 3.40282e+38 
                        abs(arr[i]) < numeric_limits<float>::min())) { // float min is 1.17549e-38
                        indexErrors.push_back(1);
                        flagErr = 1;
                    }
                }
            }
            break;
        }
    }
    return arr;
}