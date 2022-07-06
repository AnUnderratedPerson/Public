#include <iostream>
#include <string>

#ifndef STD

#define STD
using namespace std;

#endif

namespace Test {
    template <typename T>
    void PrintValue(T);
}