#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <limits>
#include <sstream>

using namespace std;

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class CountAndSumTest : public ::testing::Test {
protected:
    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    vector<float> result;
    vector<float> arr_standard;
    vector<float> readDataFromFile(const string& filename) {
        vector<float> data;
        ifstream file(filename);
        float value;
        while (file >> value) {
            //std::string input = std::to_string(value);
            //value = stof(processNumber(input));
            data.push_back(value);
        }
        return data;
    }
    void SetUp() override {

    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {

    }


};




#define CREATE_TEST(num) \
    TEST_F(CountAndSumTest, CTest##num) { \
        string testFileName = "test" + to_string(num) + ".txt"; \
        string standardFileName = "standard" + to_string(num) + ".txt"; \
        arr_standard = readDataFromFile(standardFileName); \
        result = fun(testFileName); \
        EXPECT_EQ(result, arr_standard); \
    }

CREATE_TEST(1)
CREATE_TEST(2)
CREATE_TEST(3)
CREATE_TEST(4)
CREATE_TEST(5)
CREATE_TEST(6)
CREATE_TEST(7)
CREATE_TEST(8)
CREATE_TEST(9)
CREATE_TEST(10)
CREATE_TEST(11)
CREATE_TEST(12)
CREATE_TEST(13)
CREATE_TEST(14)
CREATE_TEST(15)
CREATE_TEST(16)
CREATE_TEST(17)
CREATE_TEST(18)
CREATE_TEST(19)
CREATE_TEST(20)


//// Пример теста1
//TEST_F(CountAndSumTest, CTest1) {
//    nameFile = "initial.txt";
//    // Вызываем функцию countAndSum с тестовыми данными
//    result = fun(nameFile);
//    //Добавить файл с ожидаемыми данными
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result, arr_standart);
//}


