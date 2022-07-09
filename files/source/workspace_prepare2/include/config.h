#ifndef CONFIG_H
#define CONFIG_H
#include <unordered_map>
#include <string>
using std::string;
using std::unordered_map;

class dummyClass
{
private:
    int data;
public:
    dummyClass() {}
    dummyClass(int x) : data(x) {}

    void printData() const;
};


#endif