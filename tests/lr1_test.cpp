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
    void SetUp() override {
        // Например, инициализация данных
        //arr = {10, 14, 15, 20, 21, 25, 30};
        string nameFile = "standard.txt";
        ifstream input(nameFile);
        float ch;
        while (input >> ch) {
            arr_standart.push_back(ch);
        }
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
        //arr.clear();
    }

    // Объявляем переменные, которые будут использоваться в тестах
    std::string nameFile;
    std::vector<float> result;
    std::vector<float> arr_standart;
};

// Пример теста1
TEST_F(CountAndSumTest, CTest1) {
    nameFile = "initial.txt";
    // Вызываем функцию countAndSum с тестовыми данными
    result = fun(nameFile);
    //Добавить файл с ожидаемыми данными
// Проверяем ожидаемые результаты
    EXPECT_EQ(result, arr_standart);
    EXPECT_EQ(result, arr_standart);
}

// Пример теста 2
TEST_F(CountAndSumTest, CTest2) {
// Вызываем функцию countAndSum с тестовыми данными
    nameFile = "initial.txt";
    result = fun(nameFile);

// Проверяем ожидаемые результаты
    EXPECT_EQ(result, arr_standart);
    EXPECT_EQ(result, arr_standart);
}
//
//// Пример теста3
//TEST(CountAndSumTest1, CTest3) {
//    // Объявляем переменные, которые будут использоваться в тесте
//    std::vector<int> arr;
//    std::pair<int, int> result;
//    // Инициализация данных
//    arr = {10, 14, 15, 20, 21, 25, 30, 35, 5};
//// Вызываем функцию countAndSum с тестовыми данными
//    result = fun(nameFile);
//
//// Проверяем ожидаемые результаты
//    EXPECT_EQ(result.first, 6);
//    EXPECT_EQ(result.second, 105);
//}