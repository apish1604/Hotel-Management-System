#ifndef DATETIME_H
#define DATETIME_H
#include<bits/stdc++.h>
#include<ctime>
using namespace std;

class Datetime
{
	int YY, MMM, DD, HH, MM, SS;
public:
    Datetime();
    Datetime operator-(Datetime d);
    Datetime operator+(Datetime d);
    void print_DateTime();
    ~Datetime();
};
#endif
