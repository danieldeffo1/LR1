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


    vector<float> data1;

    data1 = fun("test1.txt");

    vector<float> data2;
    ifstream file("standard1.txt");
    float value;
    while (file >> value) {
        data2.push_back(value);
    }

    for (int i = 0; i < data1.size(); i++)
    {
        std::cout << std::fixed << std::setprecision(20);
        cout << data1[i] << endl;
        cout << data2[i] << endl;
        if (data1[i] == data2[i]) {
            cout << "da" << endl;
        }
        else
        {
            cout << "net" << endl;
        }
    }


    return 0;
}