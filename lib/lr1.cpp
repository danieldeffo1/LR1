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


std::string processNumber(const std::string& s) {
    std::string result;
    int firstNonZeroDigitIndex = -1;
    int endNonZeroDigitIndex = -1;
    int digitCount = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (isdigit(s[i]) && s[i] != '0') {
            firstNonZeroDigitIndex = i;
            break;
        }
    }

    for (int i = 0; i < s.size(); ++i) {
        if (i < firstNonZeroDigitIndex && s[i] != '.' && s[i] != '-') {
            result += '0';
        }
        else if (isdigit(s[i]) && digitCount < 7) {
            result += s[i];
            digitCount++;
        }
        else if (s[i] == '.') {
            result += '.';
        }
        else {
            if (s[i] == '-')
                result += '-';
            else
                result += '0';
        }
    }

    return result;
}


vector<float> fun(string nameFile) {


    vector<float> arr = {};
    vector<float> res_arr = {};
    int countNums = 0;
    bool flag_id_arr = true;
    ifstream input(nameFile);
    string str_ch;
    float ch;

    while (input >> str_ch) {
        //ch = floor(ch * 10000000.0) / 10000000.0; //оставл€ем 6 цифр (отсекаем остальное)
        ch = stof(processNumber(str_ch));
        std::string input = std::to_string(ch);
        ch = stof(processNumber(input));
        countNums++;
        if (countNums == 1024) {
            res_arr.push_back(666); //" оличество чисел в массиве > 1024"
            arr = {};
            break;
        }
        if (flag_id_arr && ch < -1) {
            res_arr.push_back(countNums - 1);// индекс массива, удовлетвор€ющий условию
            res_arr.push_back(ch);// элемент массива, удовлетвор€ющий условию
            flag_id_arr = false;
        }
        arr.push_back(ch);
    }


    for (int i = 0; i < arr.size(); i++) {

        if (!flag_id_arr && arr[i] < 0) {
            float n = pow(arr[i], 3);
            std::string input = std::to_string(n);
            float ch1 = stof(processNumber(input));
            res_arr.push_back(ch1);
        }
        else
        {
            res_arr.push_back(arr[i]);
        }

    }


    return res_arr;
}