#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
#include "../include/algorithms/mergesort.h"
#include "../include/algorithms/quicksort.h"
#include "../include/algorithms/heapsort.h"
#include "../include/algorithms/introsort.h"

void print(std::vector<int> array)
{
    std::vector<int>::iterator array_ptr = array.begin();
    std::cout << std::endl;
    while (array_ptr < array.end())
    {
        std::cout << *array_ptr << " - ";
        array_ptr++;
    }
}

std::vector<int> draw(int min, int max, int amount)
{
    srand( time( NULL ) );
    std::vector<int> numbers;
    int liczba;
    for (int i = 0; i < amount; i++)
    {
        liczba = ( std::rand() % (max-min)+1 ) + min;
        numbers.insert(numbers.end(), liczba);
    }
    return numbers;
}

void sortBackwards(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    sort(start, end, std::greater<int>());
}

void sortPercent(std::vector<int>::iterator start, std::vector<int>::iterator end, float percentage)
{
    std::vector<int>::iterator temp = start + (end - start)*percentage/100;
    sort(start, temp);
}

void test (int elements, int times)
{
    long sum = 0;
    for (int i = 0; i < times; i++)
    {
        std::vector<int> test = draw(0, 1000000, elements);
        //sortPercent(test.begin(), test.end(), percentage);
        sortBackwards(test.begin(), test.end());
        IntroSort<int> data;
        auto start = std::chrono::high_resolution_clock::now();
        data.sort(test.begin(), test.end());
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(end- start);
        sum += duration.count();
    }
    long average = sum / times;
    std::cout << average << std::endl;
}

int main(int argc, char* argv[])
{
    
        test(10000, 100);
        test(50000, 100);
        test(100000, 100);
        test(500000, 100);
        test(1000000, 100);
        std::cout<< std::endl;





    return 0;
}
